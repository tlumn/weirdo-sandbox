#include<stdio.h>
#include <iostream>
#include <conio.h>
#include <windows.h>

int main()
{
    char ch;
    int flag = 1;
 
    while (flag) {
        if(GetKeyState(VK_RSHIFT) & 0x8000) {
            std::cout << "Right Shift key pressed" << std::endl;
            flag = 0;
        }
    }
    
    return 0;
}