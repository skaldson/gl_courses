#include "runerFunc.hpp"
//move this variables to runerdeffunc.cpp and write a method for bunny and torois access
runer bunny{0,0};
runer tortois{0,0};
runer arrCompetitor[RUNER_ARR_SIZE]={bunny,tortois};

int main() 
{
    char runerStripe[STRIPE_LENGTH_SIZE];
    inItStripe(runerStripe);
    
    int tortoisIndex=0,bunnyIndex=0;
    
    while(true)
    {
        srand(time(NULL));
        
        tortoisIndex=rand()%10;
        bunnyIndex=rand()%10;
        
       youMustMove(runerStripe,bunnyArrIndex,tortoisArrIndex);
       
       printRunerStripe(runerStripe);
       
       if(bunny.position==(STRIPE_LENGTH_SIZE-1)&&tortois.position==(STRIPE_LENGTH_SIZE-1))
       {
           std::cout<<"FRIENDSHIP ARE WON!!!\n";
           break;
       }
       else if(bunny.position==(STRIPE_LENGTH_SIZE-1)||tortois.position==(STRIPE_LENGTH_SIZE-1))
       {
            std::cout<<"\n"<<bunnyOrTortois()<<"  ARE WON\n";
            break;
       }
    }
    
    keepWindowOpen();
    return 0;
}
