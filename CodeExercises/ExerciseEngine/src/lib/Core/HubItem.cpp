// =======================
// SECTION START: Includes
// =======================

// External Includes
#include <cstddef>
#include <cstdio>
#include <stdexcept>
#include <string>

// Internal Includes
#include "CDEX/Core/HubItem.h"

// =====================
// SECTION END: Includes
// =====================

// ==========================
// SECTION START: START CLASS
// ==========================

// ==== SECTION START: (CLASS) HubItem ====

// ==============================
// Constructor/Destructor Methods
// ==============================

// ==== Constructor ====

/**/
HubItem::HubItem(std::string initial_name) : name(initial_name) {
    this->return_item = nullptr;
    this->message = "";
}

// ==== Desctructor  ====

HubItem::~HubItem() {
    // We simply want to "disconnect" from the ancestor menu
    // Deletion is handled separately
    this->return_item = nullptr;
}

// =====================
// Getter/Setter Methods
// =====================

/**/
std::string HubItem::getName() {
    return this->name;
}

std::string HubItem::getItemMessage() {
    return this->message;
}

void HubItem::setItemMessage(std::string new_message) {
    this->message = new_message;
}

HubItem* HubItem::getReturnItem() {
    return this->return_item;
}

void HubItem::setReturnItem(HubItem* new_return_item) {
    this->return_item = new_return_item;
}

// =============
// Other Methods
// =============

/**/
bool HubItem::isValidInput(std::string command) {

    bool success = true;
    size_t break_index = 0;
    int converted_num;

    try {
        converted_num = stoi(command, &break_index);
    } catch (std::invalid_argument) {
        success = false;
    } catch (std::out_of_range) {
        success = false;
    }

    // We want the commend to be nothing more
    // than the option number
    if (break_index < command.length()) {
        success = false;
    }

    return success;
}


int HubItem::commandToInt(std::string command) {

    bool success = true;
    size_t break_index = 0;
    int converted_num;

    try {
        converted_num = stoi(command, &break_index);
    } catch (std::invalid_argument) {
        success = false;
    } catch (std::out_of_range) {
        success = false;
    }

    // We want the commend to be nothing more
    // than the option number
    if (break_index < command.length()) {
        success = false;
    }

    if (success) { return converted_num; }
    else { return -1; }

}

// ==== SECTION END: (CLASS) HubItem ====

// ========================
// SECTION START: END CLASS
// ========================

