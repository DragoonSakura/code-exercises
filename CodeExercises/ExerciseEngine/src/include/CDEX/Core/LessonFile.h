// =======================
// SECTION START: Includes
// =======================

#pragma once

// External Includes

// Internal Includes
#include "CDEX/Core/HubItem.h"

// =====================
// SECTION END: Includes
// =====================

// ==========================
// SECTION START: START CLASS
// ==========================

/*
* @class A class to manage a single lesson
*/
class LessonFile : public HubItem {

    // ================
    // Member Variables
    // ================

    std::string files_dir;

    // ==============================
    // Constructor/Destructor Methods
    // ==============================

    // ==== Constructor ====

    /*
    * @brief Constructor for LessonFile
    *
    * @param
    */
    LessonFile(std::string initial_name);

    // ==== Destructor ====

    /*
    * @brief Constructor for LessonFile
    *
    * @param
    */
    ~LessonFile();

    // =============
    // Other Methods
    // =============

    /*
    * @brief Shows the options to view different aspects of the Lesson.
    */
    void display();

    /*
    * @brief Runs the core feature of the HubItem (Usually given Input)
    */
    void run();

};

// ========================
// SECTION START: END CLASS
// ========================
