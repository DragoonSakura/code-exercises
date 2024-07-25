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
* @class An interface class for items linked to menus
*
* Includes:
* - Menu
*/
class HubItem {

    // ================
    // Member Variables
    // ================

    std::string name;

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
    HubItem(std::string initial_name) : name(initial_name) {}

    // ==== Destructor ====

    /*
    * @brief Constructor for HubItem
    *
    * @param
    */
    virtual ~HubItem() = 0;

};

// ========================
// SECTION START: END CLASS
// ========================
