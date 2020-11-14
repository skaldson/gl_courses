#include "EratoFunction.h"


void keepWindowOpen()
{
    std::cin.clear();
    std::cout<<"\nPlease enter character\n";
    char symbol;
    std::cin>>symbol;
    return;
}

void inItArray(int *arr)
{
    for(int i=0;i<GRIDS_SIZE;i++)
        arr[i]=1;
}

bool isPrimeNumber(int inItData)
{
    bool primeCondition=true;
    
    for(int i=2;i<=std::sqrt(inItData);i++)
        if((double)(inItData%i)==0)
            primeCondition=false;
        
    return primeCondition;
}

void makeZeroAtArrayIndex(int *arr, int index)
{
    for(int i=2*index;i<GRIDS_SIZE;i+=index)
        arr[i]=0;
}

void printAtOneValue(int* arr)
{
    for(int i=1;i<GRIDS_SIZE;i++)
        if(arr[i]==1)
            std::cout<<i<<std::endl;
}
