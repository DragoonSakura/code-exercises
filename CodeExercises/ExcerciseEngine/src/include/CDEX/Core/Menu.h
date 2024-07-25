// =======================
// SECTION START: Includes
// =======================

#pragma once

// External Includes
#include <vector>

// Internal Includes

// =====================
// SECTION END: Includes
// =====================

// ==========================
// SECTION START: START CLASS
// ==========================

/*
* @class A class for a single interactive menu
*
* A menu lists options avaialable.
* It accepts input from the user and then directs them
* to another menu or passes a task to be performed.
*/
class Menu {

    // ================
    // Member Variables
    // ================
private:
    std::vector<Menu> menu_options;

    // ==============================
    // Constructor/Destructor Methods
    // ==============================

    // ==== Constructor ====

    /*
    * @brief Constructor for Menu
    *
    * @param
    */
    Menu();

    // ==== Destructor ====

    /*
    * @brief Constructor for Menu
    *
    * @param
    */
    ~Menu();

};

// ========================
// SECTION START: END CLASS
// ========================
