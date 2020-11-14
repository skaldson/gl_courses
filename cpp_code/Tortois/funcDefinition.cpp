#include "funcDeclaration.h"

void keepWindowOpen()
{
    std::cin.clear();
    std::cout<<"\nPlease enter character\n";
    char ch;
    std::cin>>ch;
    return;
}

void print2ChArr(char arr[][floorSize],Point p)
{
    std::cout<<std::setw(4);
    for(int i=0;i<floorSize;i++)
    {
        for(int j=0;j<floorSize;j++)
        {
            std::cout<<(char)arr[i][j]<<std::setw(4);
        }
        std::cout<<std::endl;
    }
}

void splitIntoTokens(std::string command, int &commandPart, int &stepsPart)
{
    std::string compart="";
    std::string steppart="";
    
    int cCommaIndex=0;
    
    
    for(int i=0;i<command.length();i++)
    {
            if(command.at(i)==',')
                break;
            else
            {compart+=command.at(i);cCommaIndex++;}
    }
    
    for(int i=cCommaIndex+1;i<command.length();i++)
        steppart+=command.at(i);
        
    commandPart=std::stoi(compart);
    stepsPart=std::stoi(steppart);
}

bool validCoordinates(Point p)
{
    return ((p.x>=0&&p.x<=19)&&(p.y>=0&&p.y<=19))?true:false;
}

void forwardTurn(char (*arr)[floorSize], Point &p, int number)
{
    std::cout<<"Before :"<<p.x<<" "<<p.y<<std::endl;
    changeCoordinates(p,number);
    std::cout<<"After :"<<p.x<<" "<<p.y<<std::endl;
    
    switch(tortoisTurn)
    {
        case 1:
        {
            for(int i=p.y+number;i>=p.y;i--)
                arr[i][p.x]='1';
        }
        break;
        case 2:
        {
            for(int i=p.x-number;i<=p.x;i++)
                arr[p.y][i]='1';
        }
        break;
        case 3:
        {
            for(int i=p.y-number;i<=p.y;i++)
                arr[i][p.x]='1';
        }
        break;
        case 4:
        {
            for(int i=p.x+number;i>=p.x;i--)
                arr[p.y][i]='1';
        }
        break;
        default:
            std::cout<<"You are fucking looser\n";
    }
}

void changeCoordinates(Point& p,int stepNumbers)
{
    switch(tortoisTurn)
    {
        case 1:
        {p.y-=stepNumbers;if(!validCoordinates(p))p.y=0;}
        break;
        case 2:
        {p.x+=stepNumbers;if(!validCoordinates(p))p.x=19;}
        break;
        case 3:
        {p.y+=stepNumbers;if(!validCoordinates(p))p.y=19;}
        break;
        case 4:
        {p.x-=stepNumbers;if(!validCoordinates(p))p.x=0;}
        break;   
    }
}

void circleChangeOfTurn(int number)
{
    if(number==3)
    {
        if(tortoisTurn==Left)
            tortoisTurn=Forward;
        else
            tortoisTurn++;
    }
    if(number==4)
    {
       if(tortoisTurn==Forward)
           tortoisTurn=Left;
       else
           tortoisTurn--;
    }
}





    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
