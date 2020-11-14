#include <iostream>
#include <iomanip>
#include <string>
#include <cstring>

struct Point
{
    int x;
    int y;
};

enum whichTurn{Forward=1,Right,Back,Left};
const int floorSize=20;
static int tortoisTurn=Forward;

void keepWindowOpen();

void print2ChArr(char arr[][floorSize],Point p);

bool validCoordinates(Point p);

void changeCoordinates(Point &p,int stepNumbers);

void forwardTurn(char (*arr)[floorSize],Point &p,int number);

//void changeTurn(int number);

//int validNumber(int number);

void splitIntoTokens(std::string command,int &commandPart,int &stepsPart);

void circleChangeOfTurn(int number);
