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
    std::vector<HubItem*> m_menu_items;

    // ==============================
    // Constructor/Destructor Methods
    // ==============================

public:

    // ==== Constructor ====

    /*
    * @brief Constructor for Menu
    *
    * @param initial_name The name of the menu
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
    * @brief Gets the menu explanation message for the user
    */
    void getMessage();

    /*
    * @brief Add an option to the menu
    * 
    * @param new_item The new HubItem being add to options
    *
    * @return void
    */
    void addItem(HubItem* new_item);

    // =============
    // Other Methods
    // =============

    /*
    * @brief Shows the options available from the current menu
    */
    void display();


    /*
    * @brief Check if the command string is a valid option in the menu
    *
    * Failure case:
    * - Item not on menu
    * - Item not valid (Not a positive int string)
    *
    * @param command The command string to run
    *
    * @return True <=> valid command
    */
    bool validCommand(std::string command);

    /*
    * @brief Get the item at the given option number
    *
    * @param item_num The listed option number for the item
    *
    * @return The Hub item at the option
    */
    HubItem* getItem(int item_num);
    /*
    * @brief Runs the Menu and prepares options and input handling
    *
    * @return void
    */
    void run();

    /*
    * @brief List all the menu options with input number
    *
    * @return void (prints to console)
    */
    void showMenu();


    void runOption(int choice);
    void something();

};

// ========================
// SECTION START: END CLASS
// ========================
