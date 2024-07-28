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
    virtual ~HubItem() = default;

    // =====================
    // Getter/Setter Methods
    // =====================

    std::string getName();

    // =============
    // Other Methods
    // =============
    
    virtual void run() {}

};

// ========================
// SECTION START: END CLASS
// ========================
