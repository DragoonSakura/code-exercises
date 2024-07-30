// =======================
// SECTION START: Includes
// =======================

#pragma once

// External Includes

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
* @class HubItem to return to the start menu
*/
class HomeItem : public HubItem {

    // ================
    // Member Variables
    // ================

    Menu* m_start_menu;

    // ==============================
    // Constructor/Destructor Methods
    // ==============================

    // ==== Constructor ====

    /*
    * @brief Constructor for HomeItem
    *
    * @param
    */
    HomeItem();

    // ==== Destructor ====

    /*
    * @brief Constructor for HomeItem
    *
    * @param
    */
    ~HomeItem();

    // =============
    // Other Methods
    // =============

    /*
    * @brief Returns the User to the starting menu
    *
    * @return void
    */
    void run();

};

// ========================
// SECTION START: END CLASS
// ========================
