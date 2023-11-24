#include <iostream>
#include <conio.h>

using namespace std;

int main() {

    bool gameEnd = false;

    string options[5] = {"Solo", "Multijogador", "Opcoes", "Conquistas", "Sair"};

    while (!gameEnd)
    {
        for (size_t i = 0; i < sizeof(options) / sizeof(string); i++)
        {
            cout << options[i] << "\n\n";
        }

        gameEnd = true;
    }
    
    return 0;
}