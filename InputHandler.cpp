#include <iostream>
#include "InputHandler.h"

Command* InputHandler::handleInput(char input)
{
    if (input == 'w') return buttonW_;
    if (input == 's') return buttonS_;
    if (input == 'a') return buttonA_;
    if (input == 'd') return buttonD_;

    return NULL;
}

void InputHandler::bindCommand(char key, Command* command)
{
    if(key == 'w') buttonW_ = command;
    else if(key == 's') buttonS_ = command;
    else if(key == 'a') buttonA_ = command;
    else if(key == 'd') buttonD_ = command;
}
