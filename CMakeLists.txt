set(TARGET g1r-mod)

project(MyProject LANGUAGES CXX RC)

add_library(${TARGET} SHARED
    dllmain.cpp
    GamePlayEffect_Proxy.hpp
    WeaponDefinition_Proxy.hpp
    Shared_Proxy.hpp
    scripts/scripts.cpp
    scripts/scripts.h
    scripts/AttributePatcherBase.cpp
    scripts/AttributePatcherBase.h
    scripts/WeaponAttributePatcher.cpp
    scripts/WeaponAttributePatcher.h
    scripts/GEAttributePatcher.cpp
    scripts/GEAttributePatcher.h
    g1r-mod.rc
    resource.h
)

target_include_directories(${TARGET} PRIVATE .)
target_link_libraries(${TARGET} PUBLIC UE4SS)

# Copy the DLL to the game's mod directory after building (optional, adjust path as needed)
# add_custom_command(TARGET ${TARGET} POST_BUILD
#     COMMAND ${CMAKE_COMMAND} -E copy $<TARGET_FILE:${TARGET}> "path/to/game/Binaries/Win64/Mods/${TARGET}/dlls/"
# )