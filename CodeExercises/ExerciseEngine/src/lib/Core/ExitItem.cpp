// =======================
// SECTION START: Includes
// =======================

// External Includes

// Internal Includes
#include "CDEX/Core/HubItem.h"
#include "CDEX/Core/ExitItem.h"

// =====================
// SECTION END: Includes
// =====================

// ==========================
// SECTION START: START CLASS
// ==========================

// ==== SECTION START: (CLASS) ExitItem ====

// ==============================
// Constructor/Destructor Methods
// ==============================

// ==== Constructor ====
ExitItem::ExitItem() : HubItem("exit"), m_is_running(true) {}

// ==== Destructor ====

ExitItem::~ExitItem() {}

// =====================
// Getter/Setter Methods
// =====================

bool ExitItem::getRunStatus() {
    return this->m_is_running;
}

void ExitItem::setRunStatus(bool new_status) {
    this->m_is_running = false;
}

// =============
// Other Methods
// =============

void ExitItem::run() {
    printf("LessonHub is now exiting");
    this->setRunStatus(false);
}

// ==== SECTION END: (CLASS) ExitItem ====

// ========================
// SECTION START: END CLASS
// ========================

