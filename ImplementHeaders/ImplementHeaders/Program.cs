﻿using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.IO;
using System.Linq;
using System.Text.RegularExpressions;

namespace ImplementHeaders
{
    class Program
    {
        private static bool CountOnly = false;
        private static int FunctionCount;

        private static readonly string[] NeedsSuper = new string[] { "Serialize", "OnRegister", "OnUnregister", "PostLoad", "BeginDestroy", "PostInitProperties", "CreateRenderState_Concurrent" };

        private static readonly Dictionary<string, string> CustomImplementation = new Dictionary<string, string>()
        {
            {
            "AFGBuildable::AFGBuildable",
@"  RootComponent = CreateDefaultSubobject<USceneComponent>(""RootComponent"");


    mHighlightLocation = CreateDefaultSubobject<USceneComponent>(TEXT(""HighlightLocation""));
    mHighlightLocation->SetupAttachment(RootComponent);"
            },
            {
            "AFGBuildableConveyorBelt::AFGBuildableConveyorBelt",
@"	mSplineComponent = CreateDefaultSubobject<UFGSplineComponent>(TEXT(""SplineComponent""));

    mSplineComponent->SetupAttachment(RootComponent);"
            }
        };

        static void Main(string[] args)
        {
            if (args.Length == 0)
            {
                args = new string[] { "", "", "" };
                Console.Write("Headers dir: ");
                args[0] = Console.ReadLine();
                Console.Write("Cpp dir: ");
                args[1] = Console.ReadLine();
                Console.Write("Show only count? (y/N): ");
                args[2] = Console.ReadLine();
                if (args[2].ToLower() == "y" || args[2].ToLower() == "yes")
                    args[2] = "true";
                else
                    args[2] = "false";
            }
            if (args.Length >= 3)
                CountOnly = bool.Parse(args[2]);
            Stopwatch stopwatch = new Stopwatch();
            stopwatch.Start();
            Implement(args[0], args[1]);
            stopwatch.Stop();
            Console.WriteLine($"Done. Generated {FunctionCount} functions in {stopwatch.ElapsedMilliseconds} ms.");
        }

        private static void Implement(string path, string saveLocation)
        {
            if (File.Exists(path))
            {
                if (path.EndsWith(".h"))
                    ImplementFile(path, saveLocation);
            }
            else if (Directory.Exists(path))
            {
                foreach (string dir in Directory.EnumerateDirectories(path))
                {
                    string newSaveLocation = saveLocation + Path.DirectorySeparatorChar + new DirectoryInfo(dir).Name;
                    Directory.CreateDirectory(newSaveLocation);
                    Implement(dir, newSaveLocation);
                }
                foreach (string file in Directory.EnumerateFiles(path))
                    if (file.EndsWith(".h"))
                        ImplementFile(file, saveLocation);
            }
        }

        private static void ImplementFile(string filePath, string saveDir)
        {
            if (filePath.EndsWith("FactoryGame.h"))
                return;
            string fileContents;
            using (StreamReader reader = new StreamReader(filePath))
                fileContents = reader.ReadToEnd();
            List<string> implementations = new List<string>();
            foreach(Match match in Regex.Matches(fileContents, @"(class|struct) ([^ ]*? )??([^ ]*?)( ?: ?.*?)?\s*{((?:.|\n)*?)^};", RegexOptions.Multiline)) // Match class definition
            {
                string className = match.Groups[3].Value;
                string classContents = match.Groups[5].Value;
                if (!IsValidClassName(className))
                    continue;
                classContents = Regex.Replace(classContents, @"\/\*(?:.|\s)*?\*\/", ""); // fix for comments containing brackets being matched as functions
                classContents = Regex.Replace(classContents, @"\/\/.*", ""); // fix for comments causing some error
                classContents = Regex.Replace(classContents, @"\s*GENERATED.*?\(\)", ""); // fix for GENERATED... macros being matched
                classContents = Regex.Replace(classContents, @"\s*UPROPERTY ?\( ?(?:.|\s)*?;", ""); // fix for UPROPERTY... macros being matched
                classContents = Regex.Replace(classContents, @"\s*DEPRECATED ?\( ?(?:.|\s)*?\)", ""); // fix for UPROPERTY... macros being matched
                // Implement with #if ... and delete it (fixes issues and requires less manual changes in the end)
                foreach (Match ifMacro in Regex.Matches(classContents, @"\s*#if (.*?)\n((?:.|\n)*?)\n\s*#endif(.*)"))
                {
                    implementations.Add($"#if {ifMacro.Groups[1].Value.Trim()}");
                    implementations.AddRange(ImplementFunctions(ifMacro.Groups[2].Value, className));
                    implementations.AddRange(ImplementStaticVars(ifMacro.Groups[2].Value, className));
                    implementations.Add($"#endif {ifMacro.Groups[3].Value.Trim()}");
                }
                classContents = Regex.Replace(classContents, @"\s*#if (.*?)\n((?:.|\n)*?)\n\s*#endif(.*)", "");
                implementations.AddRange(ImplementFunctions(classContents, className));
                implementations.AddRange(ImplementStaticVars(classContents, className));
            }
            using (StreamWriter writer = new StreamWriter($"{saveDir}{Path.DirectorySeparatorChar}{Path.GetFileName(filePath).Replace(".h", ".cpp")}"))
            {
                writer.WriteLine($"// This file has been automatically generated by the Unreal Header Implementation tool");
                writer.WriteLine($"");
                writer.WriteLine($"#include \"{Path.GetFileName(filePath)}\"");
                writer.WriteLine($"");
                if (filePath.Contains("FGCheatBoardWidget.h"))
                    writer.WriteLine("#if WITH_CHEATS");
                foreach (string func in implementations)
                    writer.WriteLine(func);
                if (filePath.Contains("FGCheatBoardWidget.h"))
                    writer.WriteLine("#endif");
            }
        }

        private static List<string> ImplementStaticVars(string content, string className)
        {
            List<string> implementations = new List<string>();
            foreach (Match function in Regex.Matches(content, @"(?<!const )static\s+([\w\d_]*?)\s+([\w\d_]*?);", RegexOptions.Multiline))
            {
                string type = function.Groups[1].Value;
                string name = function.Groups[2].Value;
                implementations.Add($"{type} {className}::{name} = {type}();");
            }
            return implementations;
        }

        private static List<string> ImplementFunctions(string content, string className)
        {
            List<string> implementations = new List<string>();
            // Match function definition (including UFUNCTIONs), nothing to see here ... just walk away ... probably the reason for many missing implementations...
            foreach (Match function in Regex.Matches(content, @"^\s*(?:(UFUNCTION\s*\(.*?\))\s*)?(template\s*<\s*.*?>\s*)?(virtual ?)?(static ?)?(const ?)?(class ?)?(explicit ?)?([^=()\n{}]*? )?\n*((?:[^=<>()\n{}]|operator.+)*?)(\([^{}]*?\))(\s*const)?(\s*override)?(.*);", RegexOptions.Multiline))
            {
                // string comment = function.Groups[1].Value; // removed because regex took too long
                string ufunction = function.Groups[1].Value;
                string template = function.Groups[2].Value;
                string isVirtual = function.Groups[3].Value;
                string isStatic = function.Groups[4].Value;
                string isReturnConst = function.Groups[5].Value;
                string isClass = function.Groups[6].Value;
                string isExplicit = function.Groups[7].Value;
                string returnType = function.Groups[8].Value;
                string functionName = function.Groups[9].Value;
                string parameters = function.Groups[10].Value;
                string isConst = function.Groups[11].Value;
                string isOverride = function.Groups[12].Value;
                string extras = function.Groups[13].Value;

                if (extras.Contains("PURE_VIRTUAL")) // ignore pure virtual macro
                    continue;

                if (!IsValidFunctionName(functionName) && !(functionName.Trim().Replace("~", "") == className && string.IsNullOrWhiteSpace(returnType)))
                    continue;

                if (!string.IsNullOrWhiteSpace(template)) // All of them end up commented
                    continue;
                // regex takes too long and it is the only other way to fix UPARAM's closing bracket being matched as parameter closing bracket...
                int bracketCount = parameters.Count(ch => ch == '(') - parameters.Count(ch => ch == ')');
                if (bracketCount > 0)
                {
                    parameters += isConst + isOverride;
                    isConst = "";
                    isOverride = "";
                    while (bracketCount > 0)
                    {
                        parameters += extras[0];
                        if (extras[0] == '(')
                            bracketCount++;
                        if (extras[0] == ')')
                            bracketCount--;
                        extras = extras.Substring(1);
                    }
                    if (extras.Contains("const"))
                        isConst = " const";
                    if (extras.Contains("override"))
                        isConst = " override";
                }


                if (extras.Contains('{') || extras.Contains("delete") || extras.Contains("="))
                    continue; // already implemented in header and it matched "... { return ...; }"

                parameters = Regex.Replace(parameters, @"\/\*.*?\*\/", ""); // fix for commented defaults
                template = Regex.Replace(template, @"\/\*.*?\*\/", ""); // fix for commented defaults ?

                if (!string.IsNullOrWhiteSpace(ufunction))
                {
                    if (ufunction.Contains("BlueprintImplementableEvent"))
                    {
                        if (!CountOnly)
                            Console.WriteLine($"Skipped {className}::{functionName} (BlueprintImplementableEvent)");
                        continue;
                    }
                    if (ufunction.Contains("BlueprintNativeEvent") || ufunction.Contains("Server") || ufunction.Contains("Client") || ufunction.Contains("NetMulticast"))
                    {
                        if (ufunction.Contains("BlueprintNativeEvent") && className.Contains("Interface"))
                        {
                            if (!CountOnly)
                                Console.WriteLine($"Skipped {className}::{functionName} (BlueprintNativeEvent in Interface)"); // https://answers.unrealengine.com/questions/832889/blueprintnativeevent-function-already-has-a-body.html
                            continue;
                        }
                        ImplementFunction(implementations, className, isClass, isReturnConst, returnType, functionName.Trim() + "_Implementation", parameters, isConst, template, isStatic);
                    }
                    else if (ufunction.Contains("BlueprintPure") || ufunction.Contains("BlueprintCallable") || ufunction.ToLower().Contains("exec") || Regex.Replace(TrimUselessSpaces(ufunction), @"( ?(?:Category ?= ?"".*?""|meta ?= ?"".*""|meta ?= ?\(.*?\))(?:,| )?)", "") == "UFUNCTION()")
                        ImplementFunction(implementations, className, isClass, isReturnConst, returnType, functionName, parameters, isConst, template, isStatic);
                    if (ufunction.Contains("WithValidation"))
                        ImplementFunction(implementations, className, isClass, isReturnConst, "bool ", functionName.Trim() + "_Validate", parameters, isConst, template, isStatic);
                }
                else
                    ImplementFunction(implementations, className, isClass, isReturnConst, returnType, functionName, parameters, isConst, template, isStatic);
            }
            return implementations;
        }

        private static void ImplementFunction(List<string> implementations, string className, string isClass, string isReturnConst, string returnType, string functionName, string parameters, string isConst, string template, string isStatic)
        {
            string withoutDestructorThingy = functionName.Trim().Replace("~", "");

            if (IsValidReturnType(returnType) || (withoutDestructorThingy == className && string.IsNullOrWhiteSpace(returnType)))
            {
                if (!string.IsNullOrWhiteSpace(template))
                    template = FixDefaults(template.Trim().TrimEnd('>')) + '>' + Environment.NewLine;
                string result = $"{template}{isReturnConst}{returnType}{className}::{functionName}({Regex.Replace(FixDefaults(parameters.Trim().TrimEnd(')')), @"(?<!<)\b(class|struct)\b", "")}){isConst}";
                if (parameters.Contains("objectInitializer") && withoutDestructorThingy == className) // if it is constructor of derived class
                    result += " : Super(objectInitializer) ";
                else if (parameters.Contains("ObjectInitializer") && withoutDestructorThingy == className) // if it is constructor of derived class
                    result += " : Super(ObjectInitializer) ";
                if (parameters.Replace(" ", "").Contains("FArchive&inInnerArchive")) 
                     result += " : FArchiveProxy(inInnerArchive) ";
                if (parameters.Replace(" ", "").Contains("UCharacterMovementComponent"))
                    result += " : FNetworkPredictionData_Client_Character(clientMovement) ";
                if (functionName.Replace(" ", "").Contains("FObjectReader"))
                    result += " : FObjectReader(Obj, InBytes) ";
                if (functionName.Replace(" ", "").Contains("FObjectWriter"))
                    result += " : FObjectWriter(Obj, InBytes) ";
                result += $"{{ ";
                if (CustomImplementation.ContainsKey($"{className}::{functionName}")) // aghhhh
                    result += $"\r\n{CustomImplementation[$"{className}::{functionName}"]}\r\n}}";
                else
                {
                    if (returnType.Contains("void") || string.IsNullOrWhiteSpace(returnType))
                    {
                        if (NeedsSuper.Contains(functionName.Trim()))
                            result += $"Super::{functionName}({string.Join(",", Regex.Matches(FixDefaults(parameters), @"(?:.*? )?(.*?) (.*?)(?:, ?|\)|$)").Cast<Match>().Select(match => match.Groups[2].Value))}); ";
                        result += $"}}";
                    }
                    else
                    {
                        result += $"return ";
                        if (returnType.Trim().EndsWith("&"))
                            if (returnType.Trim().TrimEnd('&') == className)
                                result += $"*(this)";
                            else
                                result += $"*(new {returnType.Trim().TrimEnd('&')})"; // Brabb3l's life-hacks
                        else if (returnType.Trim().EndsWith("*"))
                            result += $"nullptr";
                        else
                            result += $"{GetCustomReturn(returnType)}";
                        result += $"; }}";
                    }
                }
                if (!implementations.Contains(result))
                    implementations.Add(result);
                if(!CountOnly)
                    Console.WriteLine($"Generated {className}::{functionName}");
                FunctionCount++;
            }
        }

        private static bool IsValidClassName(string className)
        {
            return Regex.Match(className, @"^[\w\d_]+$").Success;
        }

        private static bool IsValidFunctionName(string functionName)
        {
            return Regex.Match(functionName.Trim(), @"^([\w\d_~]+|operator.+)$").Success && !(new string[] { "return", "if", "else", "const", "struct", "for" /* fill with more as they show up */ }).Contains(functionName.Trim()) && !IsAllCaps(functionName.Trim()); // Don't match macros
        }

        private static string GetCustomReturn(string returnType)
        {
            returnType = TrimUselessSpaces(returnType); // trim spaces between < and character, ( and character, etc.
            switch (returnType)
            {
                case "FReply":
                    return "FReply::Unhandled()";
                case "TSharedRef<SWidget>":
                    return "Super::RebuildWidget()";
                default:
                    return $"{returnType}()";
            }
        }

        private static string TrimUselessSpaces(string str)
        {
            return Regex.Replace(str.Trim(), @"(?:([^\w\d])\s+([\w\d])|([\w\d])\s+([^\w\d])|([^\w\d])\s+([^\w\d]))", "$1$2$3$4$5$6");
        }

        private static string FixDefaults(string parameters)
        {
            string ret = string.Join(",", parameters.Trim().TrimStart('(').TrimEnd(')').Split(',').Select(param => param.Trim().Contains("UPARAM") ? param : param.Split('=')[0]));
            return ret;
        }

        private static bool IsAllCaps(string str)
        {
            return !Regex.Match(str, "[a-z]").Success && !string.IsNullOrWhiteSpace(str);
        }

        private static bool IsValidReturnType(string returnType)
        {
            return !(new string[] { "return", "if", "else", "const", "struct", "for" /* fill with more as they show up */ }).Contains(returnType.Trim()) && !IsAllCaps(returnType) && !string.IsNullOrWhiteSpace(returnType) && !returnType.Contains("FORCEINLINE"); // FORCEINLINE are already implemented in header (?)
        }
    }
}
