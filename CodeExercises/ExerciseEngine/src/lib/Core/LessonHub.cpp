// =======================
// SECTION START: Includes
// =======================

// External Includes

// Internal Includes
#include "CDEX/Core/LessonHub.h"
#include "CDEX/Core/Menu.h"
#include <cstdio>

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
    this->initial_menu = new Menu("Start Menu");
}

// ==== Destructor ====

LessonHub::~LessonHub() {}

// =============
// Other Methods
// =============

void LessonHub::run() {
    printf("Initial Lesson Name: %s\n", this->initial_menu->getName().c_str());
}

// ==== SECTION END: (CLASS) LessonHub ====

// ========================
// SECTION START: END CLASS
// ========================

