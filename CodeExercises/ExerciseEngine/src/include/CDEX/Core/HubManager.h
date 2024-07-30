// =======================
// SECTION START: Includes
// =======================

#pragma once

// External Includes

// Internal Includes
#include "CDEX/Core/ExitItem.h"
#include "CDEX/Core/HomeItem.h"
#include "CDEX/Core/LessonFile.h"
#include "CDEX/Core/LessonHub.h"
#include "CDEX/Core/Menu.h"
#include "CDEX/Core/ReturnItem.h"

// =====================
// SECTION END: Includes
// =====================

// ==========================
// SECTION START: START CLASS
// ==========================

/*
* @class Creates HubItems with presets for LessonHub
*/
class HubManager {

    // ================
    // Member Variables
    // ================

    static Menu* home_item;

    static ExitItem* exit_item;

    // ==============================
    // Constructor/Destructor Methods
    // ==============================

    // ==== Constructor ====

    /*
    * @brief Constructor for HubManager
    *
    * @param
    */
    // HubManager();

    // ==== Destructor ====

    /*
    * @brief Constructor for HubManager
    *
    * @param
    */
    // ~HubManager();

    // =========================
    // Creation/Shutdown Methods
    // =========================

    /*
    * @brief Initializes the Lesson Hub and basic setup
    *
    * @return A prebuilt LessonHub
    */
    static LessonHub* init();

    /*
    * @brief Create the Initial Menu to be used by the LessonHub
    *
    * @return The initial Menu for the LessonHub
    */
    static Menu* createStartMenu();

    /*
    * @brief Create Menu with return, home and exit functionality
    *
    * @return A prebuilt menu
    */
    static Menu* createMenu();

    /*
    * @brief Create LessonFile with return, home and exit functionality
    *
    * @return A prebuilt LessonFile
    */
    static LessonFile* createLesson();

    /*
    * @brief Create the main Home item leading to the initial item of LessonHub
    *
    * @return The HubItem to be used as the home item
    */
    static HomeItem* createHomeItem();

    /*
    * @brief Wrap a HubItem into a ReturnItem to assist in backtracking
    *
    * @return The ReturnItem to a previous HubItem
    */
    static ReturnItem* createReturnItem();

    /*
    * @brief Create a prebuilt Exit Item for LessonHub
    *
    * @return The Exit item to manage exiting the program
    */
    static ExitItem* createExitItem();

    // =====================
    // Getter/Setter Methods
    // =====================


};

// ========================
// SECTION START: END CLASS
// ========================
