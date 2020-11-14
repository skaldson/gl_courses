#include "runerFunc.hpp"

void keepWindowOpen()
{
        std::cin.clear();
        std::cout<<"\nPlease enter any character\n";
        char ch;
        std::cin>>ch;
        return;                                                                                                                                
}

void youMustMove ( char* runerStripe, int _bunny, int _tortois )
{
    char tempStr[STRIPE_LENGTH_SIZE];
    inItStripe(tempStr);
    
     setCurrentPosition(_bunny,_tortois);
    
    tempStr[bunny.position]='B';
    tempStr[tortois.position]='T';
    
    if(bunny.position==tortois.position)
        tempStr[bunny.position]='O';
    
    std::strcpy(runerStripe,tempStr);
}

void  setCurrentPosition(int &bunnyPos,int &tortoisPos)
{ 
    if((bunnyPos+bunny.position)<tortoisArrIndex)
        bunny.position=tortoisArrIndex;
    else
        bunny.position+=bunnyPos;
    if((tortoisPos+tortois.position)<tortoisArrIndex)
        tortois.position=tortoisArrIndex;
    else
        tortois.position+=tortoisPos;
    if((bunnyPos+bunny.position)>STRIPE_LENGTH_SIZE-1)
        bunny.position=STRIPE_LENGTH_SIZE-1;
    else
        bunny.position+=bunnyPos;
    if((tortoisPos+tortois.position)>STRIPE_LENGTH_SIZE-1)
        tortois.position=STRIPE_LENGTH_SIZE-1;
    else
        tortois.position+=tortoisPos;
}

void copyStr2ToStr1(char *str1,char *str2)
{
    for(;(*str1=*str2)!='\0';str1++,str2++)
    {std::cout<<"loop"<<(void*)str1<<" "<<(void*)str2<<std::endl;}
        
}

void printRunerStripe(char *str)
{
    for(int i=0;i<STRIPE_LENGTH_SIZE;i++)
        std::cout<<str[i];
}

void inItStripe(char str[STRIPE_LENGTH_SIZE])
{
    for(int i=0;i<STRIPE_LENGTH_SIZE;i++)
        str[i]=' ';
}

std::string bunnyOrTortois()
{
    std::string result="BUNNY";
    if(arrCompetitor[bunnyArrIndex].position==STRIPE_LENGTH_SIZE)
        return result;
    else
        result="TORTOIS";
    if(arrCompetitor[tortoisArrIndex].position==STRIPE_LENGTH_SIZE)
        return result;
}





