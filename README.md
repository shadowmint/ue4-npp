# ue4-npp

Libnpp utilities for ue4.

## Build

Setup the folder structure for project with http://www.github.com/shadowmint/ue4-bash-scripts:

    - unreal/
    - unreal/UnrealEngine
    - unreal/bin
    - unreal/projects/MyProject
    - unreal/projects/MyProject/Plugins/NppPlugin

Add NppPlugin to your project dependencies in MyProject.Build.cs:

    PublicDependencyModuleNames.AddRange(new string[] {
      "Core", "CoreUObject", "Engine", "InputCore", "NppPlugin" // <-- This
    });

Run the build scripts:

    project.sh MyProject
    build.sh MyProject
