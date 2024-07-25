--[[
    ==================================================

    Author: DragoonSakura

    Brief: premake5 file for ExerciseEngine

    ==================================================
]]

-- ==================================================
--               ExerciseEngine
-- ==================================================

project "ExerciseEngine"
    kind "ConsoleApp"
    language "C++"

    targetdir ("%{wks.location}/bin//%{prj.name}")
    objdir("%{wks.location}/bin-int/%{prj.name}")

-- ==================================================
-- SECTION: Files and Includes
-- ==================================================

    files {
         "src/**.h",
         "src/**.cpp"
    }

    pchheader "lesson_pch.h"
    pchsource "src/lesson_pch.cpp"

    includedirs {
        "src",
        "src/include"
    }

-- ==================================================
-- SECTION: Libraries
-- Note: Library includes go in includedirs
-- ==================================================

    -- links {
    -- }

-- ==================================================
-- SECTION: Global
-- ==================================================

    defines {
        -- "CDEX_BUILD_DLL"
    }

-- ==================================================
-- SECTION: action Filters
-- ==================================================

    filter "action:gmake"

    filter "action:vs2022"

-- ==================================================
-- SECTION: OS Filters
-- ==================================================

    filter "system:windows"
        cppdialect "C++17"
        system "windows"
        systemversion "latest"

        defines {
            "CDEX_PLATFORM_WINDOWS",
        }

        links {"mingw32"}


    filter "system:linux"
        cppdialect "C++17"
        systemversion "latest"

        links {
            "dl",
            "pthread"
        }

        defines {
            "CDEX_PLATFORM_LINUX"
        }

-- ==================================================
-- SECTION: Config Filters
-- ==================================================

    filter "configurations:Debug"
        runtime "Debug"
        symbols "on"    
        defines {"CDEX_DEBUG"}


    filter "configurations:Release"
        runtime "Release"
        optimize "on"
        defines {"CDEX_RELEASE"}

    filter {}


