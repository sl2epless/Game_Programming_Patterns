#ifndef INPUT_HANDLER_H
#define INPUT_HANDLER_H

#include "Command.h"

class InputHandler
{
public:
    Command* handleInput(char input);
    void bindCommand(char key, Command* command);
private:
    Command* buttonW_;
    Command* buttonS_;
    Command* buttonA_;
    Command* buttonD_;
};

#endif