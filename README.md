# PavlovVRSDK
SDK for Pavlov VR

Useful game info:
```GNames:
48 8B 05 ? ? ? ? 48 85 C0 75 56
\x48\x8B\x05\x00\x00\x00\x00\x48\x85\xC0\x75\x56 xxx????xxxxx

GObjects:
48 8D 0D ? ? ? ? E8 ? ? ? ? E8 ? ? ? ? 48 8B D6 48 89 B5
\x48\x8D\x0D\x00\x00\x00\x00\xE8\x00\x00\x00\x00\xE8\x00\x00\x00\x00\x48\x8B\xD6\x48\x89\xB5 xxx????x????x????xxxxxx

GWorld: 
48 8B 1D ? ? ? ? 74 40
\x48\x8B\x1D\x00\x00\x00\x00\x74\x40 xxx????xx

GetBoundingBox:
48 8B C4 48 89 58 10 48 89 70 18 55 57 41 54 41 55
\x48\x8B\xC4\x48\x59\x58\x10\x48\x89\x70\x18\x55\x57\x41\x54\x41\x55 xxxxxxxxxxxxxxxxx

GetBonePos:
48 89 5C 24 ? 48 89 74 24 ? 57 48 81 EC ? ? ? ? F6 81
\x48\x89\x5C\x24\x00\x48\x89\x74\x24\x00\x57\x48\x81\xEC\x00\x00\x00\x00\xF6\x81 xxxx?xxxx?xxxx????xx

WorldToScreen:
48 89 5C 24 ? 48 89 74 24 ? 57 48 81 EC ? ? ? ? 41 0F B6 F9
\x48\x89\x5C\x24\x00\x48\x89\x74\x24\x00\x57\x48\x81\xEC\x00\x00\x00\x00\x41\x0F\xB6\xF9 xxxx?xxxx?xxxx????xxxx

ProcessEvent: 58
CreateDefaultObject: 95
```

Useful files:
- PVR_Basic.cpp
- PVR_Basic.hpp
- PVR_CoreUObject_classes.hpp
- PVR_CoreUObject_functions.cpp
- PVR_Engine_classes.hpp
- PVR_Engine_functions.cpp
- PVR_Pavlov_classes.hpp
- PVR_Pavlov_Functions.cpp
