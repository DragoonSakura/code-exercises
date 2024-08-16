// =======================
// SECTION START: Includes
// =======================

// External Includes
#include <cstdio>
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

// ==== SECTION START: (CLASS) Menu ====

// ==============================
// Constructor/Destructor Methods
// ==============================

// ==== Constructor ====
Menu::Menu(std::string initial_name) : HubItem(initial_name) {
}

// ==== Destructor ====

Menu::~Menu() {

    // We essentially want to guarantee:
    // (1) All menus trace back to a single "start menu"
    // (2) All menus have only one menu that leads to it
    // (3) We only need to call the desctructor for the "start menu"
    // (The start menu then clear other menus in a glorious cascade fufufu)
    for ( HubItem* item : this->m_menu_items) {
        delete item;
    }
    // Now we worry about actually cleaning up this menu
    this->m_menu_items.clear();
    std::cout << "Menu: " << this->getName() << " is destroyed" << std::endl;

}

// =====================
// Getter/Setter Methods
// =====================

/**/
HubItem* Menu::getItem(int item_num) {

    // The menu options list starts at item 1
    int item_index = (item_num - 1);
    if (item_index >= 0 && item_index < this->m_menu_items.size()) {
        return this->m_menu_items[item_num - 1];
    }
    else { return nullptr; }
}

void Menu::addItem(HubItem* new_item) {
    if (new_item->getReturnItem() != nullptr) {
        std::cout << "The item is already attached" << std::endl;
        std::cout << new_item->getReturnItem() << std::endl;
        // std::cout << "Return Item Name: " << new_item->getReturnItem()->getName() << std::endl;
    } else {
        std::cout << "Item has been attached" << std::endl;
        new_item->setReturnItem(this);
        m_menu_items.push_back(std::move(new_item));
    }
}

// =============
// Other Methods
// =============

void Menu::display() {

    this->showMenu();

    std::string item_name;

    for (int i = 0; i < this->m_menu_items.size(); i++) {
        item_name = this->m_menu_items[i]->getName().c_str();
        // (Reason for i+1): We want to start options at 1
        // Want to show index to call comamnd
        std::cout << "(" << (i+1) << ") " << item_name << std::endl;
    } 
    // For nicer spacing
    std::cout << std::endl;

}

bool Menu::validCommand(std::string command) {

    int command_int = this->commandToInt(command);

    if (command_int > 0 && command_int <= this->m_menu_items.size()) {
        return true;
    }
    else { return false; }

}

void Menu::run() {

    printf("Menu: %s\n\n", this->getName().c_str());
}

void Menu::showMenu() {
    printf("Menu: %s\n\n", this->getName().c_str());

    std::string menu_message = this->getItemMessage();
    if (menu_message != "") {
        printf("%s\n\n", menu_message.c_str());
    }
}

void Menu::runOption(int choice) {
    if (choice < this->m_menu_items.size()) {
        printf("%d is not an available option", choice);
    }
    else {
        this->m_menu_items[choice]->run();
    }
}

// ==== SECTION END: (CLASS) Menu ====

// ========================
// SECTION START: END CLASS
// ========================

