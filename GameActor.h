#ifndef GAME_ACTOR_H
#define GAME_ACTOR_H

class GameActor
{
public:
    GameActor();
    
    void forward();
    void backward();
    void left();
    void right();
    int x_;
    int y_;
};

#endif