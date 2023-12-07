#include <iostream>
#include <conio.h>
#include "graphics/MenuManager.h"

using namespace std;

int main() {

    bool gameEnd = false;

    string options[5] = {"Solo", "Multijogador", "Opcoes", "Conquistas", "Sair"};

    int optionPosition = 1;

    //Game Loop
    while (!gameEnd)
    {
        // Clear
        system("CLS");

        // Menu Draw
        for (size_t i = 0; i < sizeof(options) / sizeof(string); i++)
        {
            cout << i + 1 << ". " << options[i];

            if (optionPosition - 1 == i)

                cout << " *";

            cout << "\n\n";
        }

        MenuManager menu;
        menu.testFunction();

        // Get User Key
        char key = _getch();
        key = tolower(key);

        // Process User Key
        if (key == 's' || key == 'w')
        {
            switch (key)
            {
            case 'w':

                optionPosition--;

                if (optionPosition < 1)
                    
                    optionPosition = 1;             

                break;

            case 's':

                optionPosition++;

                if (optionPosition > 5)
                    
                    optionPosition = 5;

                break;
            }
        }

        else if (key == '5') 
        {
            gameEnd = true;
        }

        else if ((int) key == 13) 
        {
            if (optionPosition == 5)

                gameEnd = true; 
        }
    }

    // End
}