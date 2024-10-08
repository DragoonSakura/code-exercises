// =======================
// SECTION START: Includes
// =======================

// External Includes
#include <cstdlib>
#include <string>
#include <stdlib.h>

// Internal Includes
#include "CDEX/Core/LessonHub.h"
#include "CDEX/Core/HubItem.h"
#include "CDEX/Core/Menu.h"
#include "CDEX/Modules/neetcode.h"

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

LessonHub::~LessonHub() {
    this->m_current_item = nullptr;
    delete this->m_home_menu;
    this->mv_menu_options.clear();
}

// =========================
// Creation/Shutdown Methods
// =========================

LessonHub* LessonHub::init() {

    LessonHub* new_hub = new LessonHub();

    std::string home_massage = "This is the Home Menu of the Lesson Hub.\n"
        "You can choose a collection of lessons from the list below to explore\n"
        "the lessons in that collection.";
    new_hub->m_home_menu->setItemMessage(home_massage);
    new_hub->m_home_menu->addItem(CDEX::createNeetMenu());

    return new_hub;
}

Menu* LessonHub::createMenu(std::string name) {

    Menu* new_menu = new Menu(name);

    return new_menu;
}

// =====================
// Getter/Setter Methods
// =====================

bool LessonHub::getRunStatus() {
    return this->m_is_running;
}

void LessonHub::setRunStatus(bool new_status) {
    this->m_is_running = new_status;
}

void LessonHub::returnHome() {
    this->m_current_item = this->m_home_menu;
}

bool LessonHub::goToAncestorItem() {
    HubItem* ancestor_item = this->m_current_item->getReturnItem();
    bool success_value = false;
    if (ancestor_item != nullptr) {
        this->m_current_item = ancestor_item;
        success_value = true;
    }
    else {
        std::cout << "Cannot go back further" << std::endl;
    }
    return success_value;
}

HubItem* LessonHub::getCurrentItem() {
    return this->m_current_item;
}

void LessonHub::setCurrentItem(HubItem* new_item) {
    this->m_current_item = new_item;
}

// =============
// Other Methods
// =============

/**/
std::string LessonHub::getInfo() {
    return "You can use the follow commands:\n"
    "\tYou can type the number (and press enter) listed to the left of an option to select it\n"
    "\th or home to return to the home menu\n"
    "\tr or return to return to the previous menu\n"
    "\tc or clear => Clear and refresh the current menu\n"
    "\t? or help => Bring up this help menu\n"
    "\te or exit => Exit the Lesson Hub\n\n";
}

std::string LessonHub::getInfoMessage() {
    return "(Type ? or help to bring up the help menu).\n\n";
}

std::string LessonHub::getInput() {

    std::string user_command;

    std::cout << "Enter a selection: ";
    std::getline(std::cin, user_command);

    return user_command;
}

void LessonHub::handleCommand() {

    // Clear the terminal to prevent too much unnexessary text
    system("clear");

    // We want to give the user a limited number of attempts
    // Prevents the program from "getting stuck" *shudders*
    int attempts = 0;
    int max_attempts = 5;

    HubItem* current_item = this->getCurrentItem();
    current_item->display();
    std::cout << this->getInfoMessage() << std::endl;

    std::string user_command;

    bool valid_command = false;

    while (!valid_command) {

        // We assume the command is valid and set back to false if it ends up invalid
        // Honeslty mostly so we don't need to keep setting it to true in each success case
        valid_command = true;

        attempts += 1;
        user_command = this->getInput();

        // We want to warn users the program is about to exit to not cause confusion
        if (attempts == (max_attempts - 1) ) {
            std::cout << "LessonHub will exit on the next invalid command to prevent getting stuck in a loop." << std::endl;
        }

        if ( user_command == "e" || user_command == "exit" || attempts >= max_attempts) {
            this->setRunStatus(false);
            if (user_command != "e" && user_command != "exit" && attempts >= max_attempts) {
                // attempt + 1 because we attempt to get input one before the loop starts
                std::cout << "Invalid command provided " << max_attempts << " times." << std::endl;
                std::cout << "Exiting Lesson Hub to prevent any unintentional loops." << std::endl;
            }
        }
        else if (user_command == "h" || user_command == "home") {
            if (this->m_current_item == this->m_home_menu) {
                std::cout << "Already at home menu" << std::endl;
                valid_command = false;
            }
            else {
                this->returnHome();
            }
        }
        else if (user_command == "?" || user_command == "help") {
            std::cout << this->getInfo() << std::endl;
            // If a command succeeds it refreshes the terminal
            // We don't want running help to refresh everything
            valid_command = false;
            // We don't want the help command consuming an input opportunity
            attempts -= 1;
        }
        else if (user_command == "c" || user_command == "clear") {
            system("clear");
        }
        else if (user_command == "r" || user_command == "return") {
            if (!this->goToAncestorItem()) {
                valid_command = false;
            }
        }
        else if (user_command == "t" || user_command == "tree") {

        }
        else if (user_command == "s" || user_command == "subtree") {

        }
        else if (current_item->validCommand(user_command)) {

            // cin gives a string but we need to convert to an int
            this->m_current_item = current_item->getItem(current_item->commandToInt(user_command));

        }
        else {
            valid_command = false;
            std::cout << user_command << " is an invalid command. Please try again." << std::endl;
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

