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

    LessonHub* main_hub = new LessonHub();

    main_hub->run();

    return 0;
}
