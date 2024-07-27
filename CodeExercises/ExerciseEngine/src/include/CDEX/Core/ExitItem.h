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
* @class A menu item to handle program runtime
*
* Tracks while the program is running.
* Can be run to end the program.
*/
class ExitItem : public HubItem {

    // ================
    // Member Variables
    // ================

    bool m_is_running;

    // ==============================
    // Constructor/Destructor Methods
    // ==============================

public:

    // ==== Constructor ====

    /*
    * @brief Constructor for ExitItem
    *
    * @param
    */
    ExitItem(std::string initial_name);

    // ==== Destructor ====

    /*
    * @brief Constructor for ExitItem
    *
    * @param
    */
    ~ExitItem();

    // =====================
    // Getter/Setter Methods
    // =====================

    /*
    * @brief Get status of whether the program is running
    * 
    * @param item ItemDes_c
    *
    * @return True <=> The 
    */
    bool getRunStatus();

    /*
    * @brief Change the running status of LessonHub
    * 
    * @param new_status true=> program now running, false => close program
    *
    * @return void
    */
    void setRunStatus(bool new_status);

    // =============
    // Other Methods
    // =============

    void run();

};

// ========================
// SECTION START: END CLASS
// ========================
