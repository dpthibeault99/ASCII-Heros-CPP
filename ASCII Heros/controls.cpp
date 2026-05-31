#include <conio.h>
#include "controls.h"

void controls(player& john, bool& gameRunning)
{
    char key = _getch();

    if (key == 'w')
    {
        john.move(0, -1);
    }

    if (key == 's')
    {
        john.move(0, 1);
    }

    if (key == 'a')
    {
        john.move(-1, 0);
    }

    if (key == 'd')
    {
        john.move(1, 0);
    }

    if (key == 27)
    {
        gameRunning = false;
    }
}