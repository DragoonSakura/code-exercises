// =======================
// SECTION START: Includes
// =======================

#pragma once

// External Includes
#include <vector>

// Internal Includes
#include "CDEX/Core/Menu.h"

// =====================
// SECTION END: Includes
// =====================

// ==========================
// SECTION START: START CLASS
// ==========================

/*
* @class Main class to handle the lesson engine
*/
class LessonHub {

    // ================
    // Member Variables
    // ================

    std::vector<Menu> menu_options;
    Menu* initial_menu;

    // ==============================
    // Constructor/Destructor Methods
    // ==============================

public:

    // ==== Constructor ====

    /*
    * @brief Constructor for LessonHub
    *
    * @param
    */
    LessonHub();

    // ==== Destructor ====

    /*
    * @brief Constructor for LessonHub
    *
    * @param
    */
    ~LessonHub();

    // =====================
    // Getter/Setter Methods
    // =====================

    /*
    * @brief Adds a menu to the lesson hub initial menu
    * 
    * @param new_menu The menu to be added
    *
    * @return void
    */
    void addMenu();

    // =============
    // Other Methods
    // =============

    /*
    * @brief Runs the LessonHub and launches the initial menu
    *
    * @return void
    */
    void run();

};

// ========================
// SECTION START: END CLASS
// ========================
