#include <iostream>

#include "graphics/MenuManager.h"

using namespace std;

int main() {

    bool gameEnd = false;

    MenuManager menu;

    //Game Loop
    while (!gameEnd)
    {
        if (menu.main() == 5)
        {
            // End
            gameEnd = true;
        }
    }
}