#include "GameActor.h"

GameActor::GameActor()
{
    x_ = 1;
    y_ = 1;
}

void GameActor::forward() {
    y_--;
}

void GameActor::backward() {
    y_++;
}

void GameActor::left() {
    x_--;
}

void GameActor::right() {
    x_++;
}