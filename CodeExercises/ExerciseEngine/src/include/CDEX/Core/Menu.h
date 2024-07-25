// =======================
// SECTION START: Includes
// =======================

#pragma once

// External Includes
#include <string>
#include <vector>

// Internal Includes
#include "CDEX/Core/HubItem.h"

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
class Menu : public HubItem {

    // ================
    // Member Variables
    // ================
private:
    std::string name;
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

    // =====================
    // Getter/Setter Methods
    // =====================

    /*
    * @brief Add an option to the menu
    * 
    * @param item ItemDes_c
    *
    * @return ClassReturn
    */
    void addOption();

};

// ========================
// SECTION START: END CLASS
// ========================
