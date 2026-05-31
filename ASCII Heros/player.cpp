#include <iostream>
#include "player.h"

using namespace std;

void player::draw()
{
    cout << "x: " << x << " y: " << y << endl;

    for (int i = 0; i < y; i++)
    {
        cout << endl;
    }

    for (int i = 0; i < x; i++)
    {
        cout << " ";
    }
    cout << "  O" << endl;

    for (int i = 0; i < x; i++)
    {
        cout << " ";
    }
    cout << " /|\\" << endl;

    for (int i = 0; i < x; i++)
    {
        cout << " ";
    }
    cout << " / \\" << endl;
}

void player::move(int changeX, int changeY)
{
    x += changeX;
    y += changeY;
}

void player::erase()
{
    for (int i = 0; i < y; i++)
    {
        cout << endl;
    }

    for (int i = 0; i < x; i++)
    {
        cout << " ";
    }
    cout << "   " << endl;

    for (int i = 0; i < x; i++)
    {
        cout << " ";
    }
    cout << "    " << endl;

    for (int i = 0; i < x; i++)
    {
        cout << " ";
    }
    cout << "    " << endl;
}