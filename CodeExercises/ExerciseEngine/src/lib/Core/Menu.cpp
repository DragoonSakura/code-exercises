// =======================
// SECTION START: Includes
// =======================

// External Includes
#include <cstdio>

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
Menu::Menu(std::string initial_name) : HubItem(initial_name) {
}

// ==== Destructor ====

Menu::~Menu() {}

// =====================
// Getter/Setter Methods
// =====================

void Menu::addOption(HubItem& new_item) {
    menu_options.push_back(std::move(new_item));
}

// =============
// Other Methods
// =============

void Menu::run() {

    printf("Menu: %s\n\n", this->getName().c_str());
}

void Menu::showMenu() {
    std::string option_name;
    for (int index = 0; index < this->menu_options.size(); index++) {
        option_name = this->menu_options[index].getName();
        // We add to index to start options from number 1 onwards
        printf("%d: %s", (index+1), option_name.c_str());
    }
}

void Menu::runOption(int choice) {
    if (choice < this->menu_options.size()) {
        printf("%d is not an available option", choice);
    }
    else {
        this->menu_options[choice].run();
    }
}

// ==== SECTION END: (CLASS) Menu ====

// ========================
// SECTION START: END CLASS
// ========================

