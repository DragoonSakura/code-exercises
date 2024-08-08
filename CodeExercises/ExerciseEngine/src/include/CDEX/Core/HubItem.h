// =======================
// SECTION START: Includes
// =======================

#pragma once

// External Includes
#include <string>
#include <vector>

// Internal Includes

// =====================
// SECTION END: Includes
// =====================

// ==========================
// SECTION START: START CLASS
// ==========================

/*
* @class An inhertiable base class for items linked to menus
*
* Includes:
* - Menu
*/
class HubItem {

    // ================
    // Member Variables
    // ================

protected:

    std::string name;
    std::string message;
    HubItem* return_item;

    // ==============================
    // Constructor/Destructor Methods
    // ==============================

public:

    // ==== Constructor ====

    /*
    * @brief Constructor for HubItem
    *
    * @param
    */
    HubItem(std::string initial_name);

    // ==== Destructor ====

    /*
    * @brief Constructor for HubItem
    *
    * @param
    */
    virtual ~HubItem();

    // =====================
    // Getter/Setter Methods
    // =====================

    /*
    * @brief Returns the HubItem name
    *
    * @return HubItem name
    */
    std::string getName();

    /*
    * @brief Display the item message (if any) in the terminal
    */
    std::string getItemMessage();

    /*
    * @brief Get the item that this Menu was entered from
    *
    * This allows us to traverse back to previous menus
    *
    * @return The ancestor menu to return to
    */
    HubItem* getReturnItem();

    /*
    * @brief Set the Message for the current item to be displayed in the terminal
    *
    * @param new_message The string with the Menu display message
    */
    void setItemMessage(std::string new_message);

    /*
    * @brief Runs a HubItem retrieval command (for inherited classes)
    *
    * @param command The listed item option number
    *
    * @return The Item at the desired list number
    */
    virtual HubItem* getItem(int command) { return nullptr; }

    /*
    * @brief Set the item this Hub Item shall return to
    *
    * This allows us to traverse back to previous menus
    *
    * @param new_return_item The menu to go back to
    */
    void setReturnItem(HubItem* new_return_item);

    // =============
    // Other Methods
    // =============

    /*
    * @brief Displays the HubItem UI interface
    *
    * All hub item display some content.
    * This includes Menu options.
    */
    virtual void display() {}

    /*
    * @brief Ensures the command string given is a valid command
    *
    * @param command The command being tested for validity
    *
    * @return True <=> The command string is valid
    */
    bool isValidInput(std::string command);

    /*
    * @brief Converts a string of non-negative ints into an int value
    *
    * Expects to give a positive number or fails
    * @warning The result is -1 on failure
    *
    * @param The command string to be converted
    *
    * @return The command as a positive int
    */
    int commandToInt(std::string command);

    virtual bool validCommand(std::string command) { return false; }

    /*
    * @brief Takes valid input and performs required command
    */
    virtual void handleHubInput(std::string command) {}

    /*
    * @brief Executes the core hubitem process
    *
    * To be defined by the hubitem
    */
    virtual void run() {}

};

// ========================
// SECTION START: END CLASS
// ========================
