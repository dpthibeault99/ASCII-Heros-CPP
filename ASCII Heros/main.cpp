#include <iostream>
#include <windows.h>

#include "player.h"
#include "controls.h"

using namespace std;

// moves cursor without clearing screen
void gotoXY(int x, int y)
{
    COORD position;

    position.X = x;
    position.Y = y;

    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),position);
}

int main()
{
    player john;

    john.x = 10;
    john.y = 10;

    bool gameRunning = true;

    while (gameRunning)
    {
        // move cursor to top-left
        gotoXY(0, 0);

        controls(john, gameRunning);

        john.draw();
    }

    return 0;
}