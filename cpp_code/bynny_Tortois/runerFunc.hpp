#ifndef RUNER_FUNC
#define RUNER_FUNC
#include <ctime>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <string>

const int DEF_ARR_SIZE=10,RUNER_ARR_SIZE=2;
const int bunnyArrIndex=0,tortoisArrIndex=1;
const int STRIPE_LENGTH_SIZE=30;
const int bunnyStep[DEF_ARR_SIZE]={0,0,9,9,-12,1,1,1,-2,-2};
const int tortoisStep[DEF_ARR_SIZE]={3,3,3,3,3,-6,-6,1,1,1};

struct runer
{
    int position;
    int motion;
};
//remove
extern runer bunny;
extern runer tortois;
extern runer arrCompetitor[RUNER_ARR_SIZE];

void keepWindowOpen();

void youMustMove(char *runerStripe,int _bunny,int _tortois);

void printRunerStripe(char *stripe);

 void setCurrentPosition(int&,int&);
 
 void copyStr2ToStr1(char *str1,char *str2);

void inItStripe(char *);

std::string  bunnyOrTortois();

#endif

