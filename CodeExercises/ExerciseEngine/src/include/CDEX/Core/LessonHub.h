// =======================
// SECTION START: Includes
// =======================

#pragma once

// External Includes
#include <vector>
#include <iostream>

// Internal Includes
#include "CDEX/Core/HomeItem.h"
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

public:
    HomeItem* home_menu;

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
    * @brief Get the program running status
    * @return True <=> Lesson Hub is running
    */
    bool getRunStatus() {
        return this->m_is_running;
    }

    /*
    * @brief Sets the running status of Lesson Hub (True <=> running)
    * @param new_status The running status we want to set to
    */
    void setRunStatus(bool new_status) {
        this->m_is_running = new_status;
    }

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
