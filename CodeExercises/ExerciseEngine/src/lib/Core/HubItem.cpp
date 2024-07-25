// =======================
// SECTION START: Includes
// =======================

// External Includes

// Internal Includes
#include "CDEX/Core/HubItem.h"
#include <string>

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
HubItem::HubItem(std::string initial_name) : name(initial_name) {}

std::string HubItem::getName() {
    return this->name;
}

// ==== SECTION END: (CLASS) HubItem ====

// ========================
// SECTION START: END CLASS
// ========================

