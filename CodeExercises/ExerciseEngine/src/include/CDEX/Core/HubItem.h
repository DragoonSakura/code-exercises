// =======================
// SECTION START: Includes
// =======================

#pragma once

// External Includes
#include "CDEX/Core/LessonHub.h"
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

    std::string getName();

    /*
    * @brief Get the item that this Menu was entered from
    *
    * This allows us to traverse back to previous menus
    *
    * @return The ancestor menu to return to
    */
    HubItem* getReturnItem();

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

    virtual void handleHubInput(std::string command, LessonHub& LessonHub) {}

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
