#include <iostream>
#include <string>
#include "player.h"

using namespace std;

void player::draw()
{
    string stickArray[] =
    {
        "  O",
        " /|\\",
        " / \\"
    };

    for (int i = 0; i < y; i++)
    {
        cout << endl;
    }

    for (int i = 0; i < 3; i++)
    {
        for (int space = 0; space < x; space++)
        {
            cout << " ";
        }

        cout << stickArray[i] << endl;
    }
}
void player::move(int changeX, int changeY)
{
    x += changeX;
    y += changeY;
}

void player::erase()
{
    string blankArray[] =
    {
        "   ",
        "    ",
        "    "
    };

    for (int i = 0; i < y; i++)
    {
        cout << endl;
    }

    for (int i = 0; i < 3; i++)
    {
        for (int space = 0; space < x; space++)
        {
            cout << " ";
        }

        cout << blankArray[i] << endl;
    }
}