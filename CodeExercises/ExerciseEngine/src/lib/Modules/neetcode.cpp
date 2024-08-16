// ==== SECTION START: Includes ====

// External Includes

// Internal Includes
#include "CDEX/Modules/neetcode.h"
#include "CDEX/Core/Menu.h"

// ==== SECTION END: Includes ====

namespace CDEX {

    Menu* createNeetMenu() {

        Menu* neet_menu = new Menu("Neet Code Exercises");

        std::string neet_message = "This is a collection of exercises from Neet Code.\n"
        "(Link as of August 2024: https://neetcode.io)\n\n"
        "The Exercises here should be listed roughly in order (they branch, so hard to represent).\n"
        "Enjoy!";

        std::string neet_tree = "┌───────────────┐    ┌────────────┐   ┌───────────┐    ┌─────┐    ┌─────┐\n"
                                "│Arrays & Hashes├─┬─►│Two Pointers├┬─►│Linked List├─┬─►│Trees├─┬─►│Tries│\n"
                                "└───────────────┘ │  └────────────┘│  └───────────┘ │  └─────┘ │  └─────┘\n"
                                "                  │     ┌─────┐    │ ┌─────────────┐│          │  ┌───────────────────┐\n"
                                "                  └────►│Stack│    ├►│Binary Search├┘          ├─►│Heap/Priority Queue│\n"
                                "                        └─────┘    │ └─────────────┘           │  └───────────────────┘\n"
                                "                                   │ ┌──────────────┐          │  ┌────────────┐\n"
                                "                                   └►│Sliding Window│          └─►│Backtracking│\n"
                                "                                     └──────────────┘             └────────────┘\n";

    std::string neet_menu_message = neet_message + "\n\n" + neet_tree;

        neet_menu->setItemMessage(neet_menu_message);

        Menu* lesson1 = new Menu("Lesson: Arrays and Hashes");
        Menu* lesson2 = new Menu("Lesson: Stack");
        Menu* lesson3 = new Menu("Lesson: Two Pointers");
        Menu* lesson4 = new Menu("Lesson: Sliding Window");
        Menu* lesson5 = new Menu("Lesson: Linked List");
        Menu* lesson6 = new Menu("Lesson: Binary Search");
        Menu* lesson7 = new Menu("Lesson: Trees");
        Menu* lesson8 = new Menu("Lesson: Tries");
        Menu* lesson9 = new Menu("Lesson: Heap/Priority Queu");
        Menu* lesson10 = new Menu("Lesson: Backtracking");


        neet_menu->addItem(lesson1);
        neet_menu->addItem(lesson2);
        neet_menu->addItem(lesson3);
        neet_menu->addItem(lesson4);
        neet_menu->addItem(lesson5);
        neet_menu->addItem(lesson6);
        neet_menu->addItem(lesson7);
        neet_menu->addItem(lesson8);
        neet_menu->addItem(lesson9);
        neet_menu->addItem(lesson10);

        return neet_menu;
    }

}


