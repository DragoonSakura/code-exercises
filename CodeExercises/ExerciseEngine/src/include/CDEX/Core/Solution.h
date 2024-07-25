// =======================
// SECTION START: Includes
// =======================

#pragma once

// External Includes
#include <string>

// Internal Includes

// =====================
// SECTION END: Includes
// =====================

// ==========================
// SECTION START: START CLASS
// ==========================

/*
* @class A template class for a single solution
*/
class Solution {

    // ================
    // Member Variables
    // ================

    std::string notes_dir;

    // ==============================
    // Constructor/Destructor Methods
    // ==============================

    // ==== Constructor ====

    /*
    * @brief Constructor for Solution
    *
    * @param
    */
    Solution();

    // ==== Destructor ====

    /*
    * @brief Constructor for Solution
    *
    * @param
    */
    ~Solution();

    // =====================
    // Getter/Setter Methods
    // =====================

    /*
    * @brief Gets the text of the question for the solution
    *
    * gets the question from a file
    *
    * @return void (print to terminal)
    */
    void getQuestion();

    /*
    * @brief Gets the explanation for solution design
    *
    * Gets the explanation from a file
    *
    * @return void (print to terminal)
    */
    void getExplanation();

    /*
    * @brief Gets the notes on the lesson
    *
    * Gets the notes from a file
    *
    * @return void (print to terminal)
    */
    void getNotes();

};

// ========================
// SECTION START: END CLASS
// ========================
