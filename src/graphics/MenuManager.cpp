#include "graphics/MenuManager.h"
#include <iostream>
#include <conio.h>

#include <string>

using string = std::string;
auto& cout = std::cout;

MenuManager::MenuManager() {
    
}

int MenuManager::main() {

    string options[5] = {"Solo", "Multijogador", "Opcoes", "Conquistas", "Sair"};
    int optionPosition = 1;

    // Clear
    system("CLS");

    // Menu Draw
    for (size_t i = 0; i < sizeof(options) / sizeof(string); i++)
    {
        std::cout << i + 1 << ". " << options[i];

        if (optionPosition - 1 == i)

            cout << " *";

        cout << "\n\n";
    }

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
        return 5;
    }

    else if ((int)key == 13)
    {
        if (optionPosition == 5)

            return 5;
    }

    return 0;
}