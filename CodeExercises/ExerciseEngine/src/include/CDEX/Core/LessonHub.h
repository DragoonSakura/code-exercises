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

};

// ========================
// SECTION START: END CLASS
// ========================
