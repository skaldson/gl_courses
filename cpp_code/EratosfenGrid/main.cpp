#include "EratoFunction.h"

int main()
{
    int eratoArray[GRIDS_SIZE];
    
    inItArray(eratoArray);
    
    for(int i=2;i<GRIDS_SIZE;i++)
        if(isPrimeNumber(i)&&eratoArray[i]==1)
            makeZeroAtArrayIndex(eratoArray,i);
        
    printAtOneValue(eratoArray);
    
    keepWindowOpen();
    return 0;
}
