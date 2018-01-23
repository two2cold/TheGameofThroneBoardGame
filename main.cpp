// This is the program for the board game The Game of Throne
// Coded by Yuchen Liu

#include <stdio.h>
#include <iostream>
#include <string.h>
#include "gameofThrone.h"

using namespace std;

int main()
{
	cout << HouseInfoList[1].power << endl;
	InitializeSea();
	cout << SeaInfoList[1].SeaNameOutput() << endl;
	strcpy(LandInfoList[2].ownedHouse, houseList[1]);
	UpdateCastle();
	UpdatePower(0);
	cout << HouseInfoList[1].power << endl;
	return 0;
}
