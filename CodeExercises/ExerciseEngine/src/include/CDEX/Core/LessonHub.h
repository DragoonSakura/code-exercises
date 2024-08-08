// =======================
// SECTION START: Includes
// =======================

#pragma once

// External Includes
#include <vector>
#include <iostream>

// Internal Includes
#include "CDEX/Core/HubItem.h"
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

private:

    std::vector<Menu> mv_menu_options;
    Menu* m_home_menu;
    HubItem* m_current_item;
    bool m_is_running;

    // ==============================
    // Constructor/Destructor Methods
    // ==============================

private:

    // ==== Constructor ====

    /*
    * @brief Constructor for LessonHub
    *
    * @param
    */
    LessonHub();

public:

    // ==== Destructor ====

    /*
    * @brief Constructor for LessonHub
    *
    * @param
    */
    ~LessonHub();

    // =========================
    // Creation/Shutdown Methods
    // =========================

    static LessonHub* init();

    /*
    * @brief Creates a Menu with the appropriate base features to return and exit
    * 
    * @param name The name to be given to the menu
    *
    * @return A predefined Menu
    */
    Menu* createMenu(std::string name);

    // =====================
    // Getter/Setter Methods
    // =====================

    /*
    * @brief Returns the Instructions on how to use the Menus
    *
    * @return String with info
    */
    std::string getInfo();

    /*
    * @brief Shows a message to activate the help info
    *
    * @return A string with the help command
    */
    std::string getInfoMessage();
    /*
    * @brief Get the program running status
    * @return True <=> Lesson Hub is running
    */
    bool getRunStatus();

    /*
    * @brief Sets the running status of Lesson Hub (True <=> running)
    * @param new_status The running status we want to set to
    */
    void setRunStatus(bool new_status);

    /*
    * @brief Returns LessonHub to its home menu
    */
    void returnHome();

    /*
    * @brief Returns to the previous menu
    *
    * @return True <=> There was an ancestor and it was obtained
    */
    bool goToAncestorItem();

    /*
    * @brief Get the currently stored Hub Item
    *
    * @return The current hub item
    */
    HubItem* getCurrentItem();

    /*
    * @brief Sets a HubItem as the current loaded HubItem
    * 
    * @param new_item The new current HubItem
    *
    * @return void
    */
    void setCurrentItem(HubItem* new_item);

    /*
    * @brief Adds a menu to the lesson hub initial menu
    * 
    * @param new_menu The menu to be added
    *
    * @return void
    */
    // void addMenu();

    // =============
    // Other Methods
    // =============

    /*
    * @brief Prompts the user for input
    */
    std::string getInput();

    /*
    * @brief Obtains and processes user commands
    *
    * @return void
    */
    void handleCommand();

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
