// =======================
// SECTION START: Includes
// =======================

#pragma once

// External Includes
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
    std::vector<HubItem> menu_options;

    // ==============================
    // Constructor/Destructor Methods
    // ==============================

public:

    // ==== Constructor ====

    /*
    * @brief Constructor for Menu
    *
    * @param
    */
    Menu(std::string initial_name);

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
    * @param new_item The new HubItem being add to options
    *
    * @return void
    */
    void addOption(HubItem& new_item);

    // =============
    // Other Methods
    // =============

    void run();

    /*
    * @brief List all the menu options with input number
    *
    * @return void (prints to console)
    */
    void showMenu();


    void runOption(int choice);

};

// ========================
// SECTION START: END CLASS
// ========================
