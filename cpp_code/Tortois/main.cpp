#include "funcDeclaration.h"

int main() 
{
    char floor[floorSize][floorSize]={{' '}};
    std::string command;
    int commandPart=0,steps=0;
    
    Point p={10,10};
    
    while(true)
    {
        std::cin>>command;
        
        if(command.length()==1)
        {
            commandPart=std::stoi(command.c_str());
            if(commandPart==3||commandPart==4)
                circleChangeOfTurn(commandPart);
            if(commandPart==6)
                print2ChArr(floor,p);
            if(commandPart==9)
                break;
        }
        else
        {
            splitIntoTokens(command,commandPart,steps);

            if(commandPart==5)
                forwardTurn(floor,p,steps);
        }
    }
   
   
    
    
    
    keepWindowOpen();
    return 0;
}
