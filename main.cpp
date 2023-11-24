#include <iostream>
#include <conio.h>

using namespace std;

int main() {

    bool gameEnd = false;

    string options[5] = {"Solo", "Multijogador", "Opcoes", "Conquistas", "Sair"};

    //Game Loop
    while (!gameEnd)
    {
        // Clear
        system("CLS");

        // Menu Draw
        for (size_t i = 0; i < sizeof(options) / sizeof(string); i++)
        {
            cout << i + 1 << ". " << options[i];

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
            case 's':
                break;

            case 'w':
                break;
            }

        } else if (key == '5')
        {
            gameEnd = true;
        }
    }
}