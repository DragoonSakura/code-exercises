--[[
    ==================================================

    Author: Yuzumi Mercury

    Brief: premake5 file for the CodeExercises
            workspace directory

    ==================================================
]]

-- ==================================================
--                    Workstation
-- ==================================================

include "wks_deps.lua"

workspace "CodeExercises"
    location ".."
    architecture "x64"

    configurations {
        "Debug",
        "Release"
    }

    toolset("clang")

    -- startup project
    startproject("ExerciseEngine")

    -- START SECTION: Custom Global Variables
    -- END SECTION: Custom Global Variables

-- ==================================================
--                      Projects
-- ==================================================

    include "ExerciseEngine"

-- ==================================================
--          SECTION: Shared Actions
-- ==================================================

-- ===== Build Actions =====

-- ===== Utility Actions =====

-- ===== Clean Actions =====

-- ==================================================
--  SECTION: All gmake Actions
-- ==================================================

-- ===== Build Actions =====

newaction {

    trigger = "build",

    description = "build Code Exercises Application.",

    execute = function()
        print("==== Building ====")
        os.execute("make")
        print("==== Building Complete ====")

        print("==== Copying Libraries ====")
        print("==== Libraries Copied ====")
    end
}

-- ===== Run Actions =====

-- ===== Utility Actions =====

-- ===== Clean Actions =====

newaction {

    trigger = "clean",

    description = "Clean the build files.",

    execute = function()
        print("==== Removing Build Directory ====")
        os.rmdir("bin")

        print("==== Removing Intermediates Directory ====")
        os.rmdir("bin-int")

        print("==== Removing Makefile ====")
        -- os.remove("")

        print("==== Removing base Makefile ====")
        -- os.remove("Makefile")

    end
}

