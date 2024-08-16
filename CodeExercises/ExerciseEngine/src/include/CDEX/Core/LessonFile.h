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
    std::string lesson_dir;

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
    * @brief Shows the various options to view the lesson
    *
    * @return String with the various options
    */
    std::string showOptions();

    /*
    * @brief Check if the command string is a valid option in the Lesson
    *
    * Failure case:
    * - Item not on list
    * - Item not valid (Not a positive int string)
    *
    * @param command The command string to run
    *
    * @return True <=> valid command
    */
    bool validCommand(std::string command);

    /*
    * @brief Get the Lesson option at the desired listing
    *
    * @param item_num The option to be run
    *
    * @return The Lesson File Item at the chosen value
    */
    HubItem* getItem(int item_num);

    /*
    * @brief Runs the core feature of the HubItem (Usually given Input)
    */
    void run();

};

// ========================
// SECTION START: END CLASS
// ========================
