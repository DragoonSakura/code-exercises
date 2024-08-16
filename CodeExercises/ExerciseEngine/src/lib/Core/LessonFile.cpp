// =======================
// SECTION START: Includes
// =======================

// External Includes
#include <iostream>

// Internal Includes
#include "CDEX/Core/HubItem.h"
#include "CDEX/Core/LessonFile.h"

// =====================
// SECTION END: Includes
// =====================

// ==========================
// SECTION START: START CLASS
// ==========================

// ==== SECTION START: (CLASS) LessonFile ====

// ==============================
// Constructor/Destructor Methods
// ==============================

// ==== Constructor ====
LessonFile::LessonFile(std::string initial_name) : HubItem(initial_name) {}

// ==== Destructor ====

LessonFile::~LessonFile() {}

// =============
// Other Methods
// =============


void LessonFile::display() {

    printf("Lesson: %s\n\n", this->getName().c_str());

    std::string lesson_message = this->getItemMessage();
    if (lesson_message != "") {
        std::cout << lesson_message << std::endl;
    }

    std::cout << this->showOptions() << std::endl;

}

std::string LessonFile::showOptions() {
    return "(1) See Lesson Problem\n"
    "(2) See Lesson Solution concept\n"
    "(3) See Solution Code\n"
    "(4) Run Lesson Tests\n\n";
}

bool LessonFile::validCommand(std::string command) {

    int command_int = this->commandToInt(command);

    if (command_int > 0 && command_int <= 4) {
        return true;
    }
    else { return false; }

}

HubItem* LessonFile::getItem(int item_num) {

    return nullptr;
}

void LessonFile::run() {

}

// ==== SECTION END: (CLASS) LessonFile ====

// ========================
// SECTION START: END CLASS
// ========================
