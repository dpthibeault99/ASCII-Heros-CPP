#pragma once

class player
{
public:
    int x;
    int y;

    void draw();
    void erase();
    void move(int changeX, int changeY);
};