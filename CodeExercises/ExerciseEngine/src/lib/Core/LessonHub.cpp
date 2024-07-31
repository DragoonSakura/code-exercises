// =======================
// SECTION START: Includes
// =======================

// External Includes
#include <string>

// Internal Includes
#include "CDEX/Core/LessonHub.h"
#include "CDEX/Core/HubItem.h"
#include "CDEX/Core/Menu.h"

// =====================
// SECTION END: Includes
// =====================

// ==========================
// SECTION START: START CLASS
// ==========================

// ==== SECTION START: (CLASS) LessonHub ====

// ==============================
// Constructor/Destructor Methods
// ==============================

// ==== Constructor ====
LessonHub::LessonHub() {

    this->m_is_running = true;

    this->m_home_menu = new Menu("Start Menu");
    this->m_current_item = this->m_home_menu;
}

// ==== Destructor ====

LessonHub::~LessonHub() {}

// =========================
// Creation/Shutdown Methods
// =========================

LessonHub* LessonHub::init() {

        LessonHub* new_hub = new LessonHub();

        return new_hub;
    }

Menu* LessonHub::createMenu(std::string name) {

    Menu* new_menu = new Menu(name);

    return new_menu;
}

// =====================
// Getter/Setter Methods
// =====================



HubItem* LessonHub::getCurrentItem() {
    return this->m_current_item;
}

void LessonHub::setCurrentItem(HubItem* new_item) {
    this->m_current_item = new_item;
}

// =============
// Other Methods
// =============

std::string LessonHub::getInput() {

    std::string user_command;

    std::cout << "Enter a selection: ";
    std::getline(std::cin, user_command);

    return user_command;
}

void LessonHub::handleCommand() {

    // We want to give the user a limited number of attempts
    // Prevents the program from "getting stuck" *shudders*
    int attempts = 0;

    this->m_current_item->run();

    std::string user_command = this->getInput();

    bool valid_command = false;

    while (!valid_command) {

        // We assume the command is valid and set back to false if it ends up invalid
        // Honeslty mostly so we don't need to keep setting it to true in each success case
        valid_command = true;

        if ( user_command == "e" || user_command == "exit" || attempts >= 5) {
            this->setRunStatus(false);
        }
        else {
            valid_command = false;
            attempts += 1;
            std::cout << user_command << " is an invalid command. Please try again." << std::endl;
            user_command = this->getInput();
        }
    }

}

void LessonHub::run() {

    while (this->getRunStatus()) {
        this->handleCommand();
    }

}

// ==== SECTION END: (CLASS) LessonHub ====

// ========================
// SECTION START: END CLASS
// ========================

