// =======================
// SECTION START: Includes
// =======================

// External Includes
#include <cstdio>
#include <string>

// Internal Includes
#include "CDEX/Core/HubItem.h"

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
HubItem::HubItem(std::string initial_name) : name(initial_name) {
    this->return_item = nullptr;
}

std::string HubItem::getName() {
    return this->name;
}

// ==== Desctructor  ====

HubItem::~HubItem() {
    this->return_item = nullptr;
}

// =====================
// Getter/Setter Methods
// =====================


HubItem* HubItem::getReturnItem() {
    return this->return_item;
}

void HubItem::setReturnItem(HubItem* new_return_item) {
    this->return_item = new_return_item;
}

// ==== SECTION END: (CLASS) HubItem ====

// ========================
// SECTION START: END CLASS
// ========================

