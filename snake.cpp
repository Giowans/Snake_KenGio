#include "snake.h"
#include <SDL.h>
#include <SDL_image.h>
Snake::Snake(int x, int y, SDL_Renderer *r)
{
    renderer = r;
    SDL_Rect head;
    head.x = x;
    head.y = y;
    head.w = BLOCK_WIDTH;
    head.h = BLOCK_HEIGHT;

    xDir = 0;
    yDir = 0;

    body.push_back(head);
}

void Snake::draw()
{
    SDL_SetRenderDrawColor(renderer, 255, 255, 0, 255);
    for (SDL_Rect rect : body)
        SDL_RenderFillRect(renderer, &rect);

}

void Snake::setDirection(int x, int y)
{
    xDir = x;
    yDir = y;
}

void Snake::update()
{
    SDL_Rect front = body.front();
    SDL_Rect r;
    r.x = front.x + xDir * BLOCK_WIDTH;
    r.y = front.y + yDir * BLOCK_HEIGHT;
    r.w = BLOCK_WIDTH;
    r.h = BLOCK_HEIGHT;

    body.erase(body.end()-1);
    body.insert(body.begin(), r);
}
SDL_Rect Snake::head()
{
    return body.front();
}
void Snake::grow()
{
    SDL_Rect tail = body.back();
    SDL_Rect newBlock = tail;
    body.push_back(newBlock);
}
bool Snake::bodyCollision()
{
    for(size_t i(1); i < body.size(); i++)
    {
        if (body[0].x==body[i].x && body[0].y == body[i].y) 
        {
            return true;
        }
    }
    return false;
}