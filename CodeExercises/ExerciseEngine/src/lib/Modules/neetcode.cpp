// ==== SECTION START: Includes ====

// External Includes

// Internal Includes
#include "CDEX/Modules/neetcode.h"

// ==== SECTION END: Includes ====

namespace CDEX {

    Menu* createNeetMenu() {

        Menu* neet_menu = new Menu("Neet Code Exercises");

        std::string neet_message = "This is a collection of exercises from Neet Code.\n"
    "(Link as of August 2024: https://neetcode.io)\n\n"
    "The Exercises here should be listed roughly in order (they branch, so hard to represent).\n"
    "Enjoy!";

        return neet_menu;
    }

}
