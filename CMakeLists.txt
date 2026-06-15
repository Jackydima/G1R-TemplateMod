set(TARGET g1r-mod)

add_library(${TARGET} SHARED
    dllmain.cpp
    GamePlayEffect_Proxy.hpp
)

target_include_directories(${TARGET} PRIVATE .)
target_link_libraries(${TARGET} PUBLIC UE4SS)

# Copy the DLL to the game's mod directory after building (optional, adjust path as needed)
# add_custom_command(TARGET ${TARGET} POST_BUILD
#     COMMAND ${CMAKE_COMMAND} -E copy $<TARGET_FILE:${TARGET}> "path/to/game/Binaries/Win64/Mods/${TARGET}/dlls/"
# )