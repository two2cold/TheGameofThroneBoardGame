// This is the program for the board game The Game of Throne
// Coded by Yuchen Liu

#include <stdio.h>
#include <iostream>
#include <string.h>
#include "gameofThrone.h"

using namespace std;

int main()
{
	InitializeSea();
	cout << LandInfoList[1].Soldier.house << endl;
	cout << LandInfoList[2].CloseSeaOutput() << endl;
	return 0;
}
