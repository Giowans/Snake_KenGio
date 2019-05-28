#ifndef SNAKEGAME_H
#define SNAKEGAME_H
#include "game.h"
#include "snake.h"

class SnakeGame : public Game
{
private:
    Snake *snake;
    SDL_Rect food;
    int score;

public:
    SnakeGame();
    void run();
    void handleEvents();
    void update();
    void render();
    void clean();
    void createFood();
    bool frameCollision();
};

#endif // SNAKEGAME_H
