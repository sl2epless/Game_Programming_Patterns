#include <iostream>
#include "Command.h"
#include "GameActor.h"
#include "InputHandler.h"

using namespace std;

const int height = 20;
const int width = 20;

void Draw(GameActor* actor) {
    system("clear");
    for (int i = 0; i < height; i++)
    {
        if(i == 0 || i == height - 1)
        {
            for (int j = 0; j < width; j++)
            {
                cout << '#';
            }
            cout << endl;
        }

        else
        {
            for (int j = 0; j < width; j++)
            {
                if(j == 0 || j == width - 1)
                {
                    cout << '#';
                }
                else if(actor->x_ == j && actor->y_ == i)
                {
                    cout << 'O';
                }
                else
                {
                    cout << ' ';
                }
            }
            cout << endl;
        }
    }
}

InputHandler inputHandler;
GameActor actor;


int main()
{
    inputHandler.bindCommand('w', new FCommand);
    inputHandler.bindCommand('s', new BCommand);
    inputHandler.bindCommand('a', new LCommand);
    inputHandler.bindCommand('d', new RCommand);
        
    char input;

    while(true) {
        Draw(&actor);
        cin >> input;
        Command* command = inputHandler.handleInput(input);
        if(command)
        {
            command->execute(actor);
        }
    }

    return 0;

}
