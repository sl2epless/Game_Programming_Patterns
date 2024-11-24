#ifndef COMMAND_H
#define COMMAND_H

#include "GameActor.h"

class Command
{
public:
    virtual ~Command() {}
    virtual void execute(GameActor& actor) = 0;
};

class FCommand : public Command
{
public:
    virtual void execute(GameActor& actor)
    {
        actor.forward();
    }
};

class BCommand : public Command
{
public:
    virtual void execute(GameActor& actor)
    {
        actor.backward();
    }
};

class LCommand : public Command
{
public:
    virtual void execute(GameActor& actor)
    {
        actor.left();
    }
};

class RCommand : public Command
{
public:
    virtual void execute(GameActor& actor)
    {
        actor.right();
    }
};



#endif