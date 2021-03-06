#pragma once
#include "Resources.hpp"

class Snake
{
public:
    Snake();
    ~Snake();

    void advance();
    void goUp();
    void goDown();
    void goLeft();
    void goRight();
    bool badCollision();
    bool foodCollision(int x, int y);
    void grow();
    void render(SDL_Renderer *renderer);
    void reset();
    void setLength(uint8_t value);
    SDL_Rect position[60];
    uint8_t getLength();

private:
    uint8_t length;
    struct xy direction;
};