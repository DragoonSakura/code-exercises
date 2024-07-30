/* // =======================
// SECTION START: Includes
// =======================

// External Includes

// Internal Includes
#include "CDEX/Core/HubManager.h"
#include "CDEX/Core/LessonHub.h"

// =====================
// SECTION END: Includes
// =====================

// ==========================
// SECTION START: START CLASS
// ==========================

// ==== SECTION START: (CLASS) HubManager ====

// ==============================
// Constructor/Destructor Methods
// ==============================

// ==== Constructor ====

// ==== Destructor ====

// =========================
// Creation/Shutdown Methods
// =========================

LessonHub* init() {

    LessonHub* new_hub = new LessonHub();


}

Menu* HubManager::createStartMenu() {

    Menu* start_menu = new Menu("Home");

    home_item = start_menu;

    return start_menu;
}

Menu* HubManager::createMenu() {}

LessonFile* HubManager::createLesson() {}

// HomeItem* HubManager::createHomeItem() {
//
//     HomeItem* new_home_item = createHomeItem();
//
//     home_item = *new_home_item;
// }

ReturnItem* HubManager::createReturnItem() {}

ExitItem* HubManager::createExitItem() {}

// ==== SECTION END: (CLASS) HubManager ====

// ========================
// SECTION START: END CLASS
// ========================
*/
