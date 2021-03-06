// Some copyright should be here...

using UnrealBuildTool;

public class SaveGameHelper : ModuleRules
{
   public SaveGameHelper(ReadOnlyTargetRules Target) : base(Target)
   {
      PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;

      PublicIncludePaths.AddRange(
         new string[] {
            "SaveGameHelper/Public",
            "Runtime/Core/Public/Misc",
            "Runtime/Core/Public/HAL"
            //"Engine/Source/Runtime/Core/Public/Misc/Paths.h",
            
            // ... add public include paths required here ...
         }
         );


      PrivateIncludePaths.AddRange(
         new string[] {
            "SaveGameHelper/Private"
            //"Runtime/Core/Private/Misc/Paths.cpp"
            //"Engine/Source/Runtime/Core/Private/Misc/Paths.cpp",
            
            // ... add other private include paths required here ...
         }
         );


      PublicDependencyModuleNames.AddRange(
         new string[]
         {
            "Core",
            "SaveGameHelper"
            
            // ... add other public dependencies that you statically link with here ...
         }
         );


      PrivateDependencyModuleNames.AddRange(
         new string[]
         {
            "CoreUObject",
            "Engine",
            "Slate",
            "SlateCore",

            // ... add private dependencies that you statically link with here ...	
         }
         );


      DynamicallyLoadedModuleNames.AddRange(
         new string[]
         {
            // ... add any modules that your module loads dynamically here ...
         }
         );
   }
}
