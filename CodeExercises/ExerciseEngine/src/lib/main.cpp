// =======================
// SECTION START: Includes
// =======================

// External Includes
#include "CDEX/Core/LessonHub.h"
#include <cstdio>

// Internal Includes

// =====================
// SECTION END: Includes
// =====================

int main (int argc, char *argv[]) {

    LessonHub* main_hub = LessonHub::init();

    main_hub->run();

    delete main_hub;

    return 0;
}
