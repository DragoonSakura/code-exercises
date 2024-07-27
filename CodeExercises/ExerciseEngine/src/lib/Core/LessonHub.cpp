// =======================
// SECTION START: Includes
// =======================

// External Includes

// Internal Includes
#include "CDEX/Core/LessonHub.h"
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
    this->initial_menu = new Menu("Start Menu");
}

// ==== Destructor ====

LessonHub::~LessonHub() {}

// =============
// Other Methods
// =============

void LessonHub::run() {

    this->initial_menu->run();

}

// ==== SECTION END: (CLASS) LessonHub ====

// ========================
// SECTION START: END CLASS
// ========================

