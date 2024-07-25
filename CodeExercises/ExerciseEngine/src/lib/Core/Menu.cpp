// =======================
// SECTION START: Includes
// =======================

// External Includes

// Internal Includes
#include "CDEX/Core/Menu.h"
#include "CDEX/Core/HubItem.h"

// =====================
// SECTION END: Includes
// =====================

// ==========================
// SECTION START: START CLASS
// ==========================

// ==== SECTION START: (CLASS) Menu ====

// ==============================
// Constructor/Destructor Methods
// ==============================

// ==== Constructor ====
Menu::Menu(std::string initial_name) : HubItem(initial_name) {}

// ==== Destructor ====

Menu::~Menu() {}

// =============
// Other Methods
// =============

void Menu::addOption(HubItem& new_item) {
    menu_options.push_back(std::move(new_item));
}

void Menu::showMenu() {
    std::string option_name;
    for (int index = 0; index < this->menu_options.size(); index++) {
        option_name = this->menu_options[index].getName();
        // We add to index to start options from number 1 onwards
        printf("%d: %s", (index+1), option_name.c_str());
    }
}

// ==== SECTION END: (CLASS) Menu ====

// ========================
// SECTION START: END CLASS
// ========================

