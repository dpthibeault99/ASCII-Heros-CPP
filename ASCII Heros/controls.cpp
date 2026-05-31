#include <conio.h>
#include "controls.h"

void controls(player& john, bool& gameRunning) 
{
    char key = _getch();

    if (key == 'w')
    {
        john.y--;
    }

    if (key == 's')
    {
        john.y++;
    }

    if (key == 'a')
    {
        john.x--;
    }

    if (key == 'd')
    {
        john.x++;
    }
    // ESC key
    if (key == 27)
    {
        gameRunning = false;
    }
}