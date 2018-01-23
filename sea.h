// Define seas
// Coded by Yuchen Liu

#ifndef SEA_H__
#define SEA_H__
#include "stdio.h"
#include <iostream>

extern const char seaList[12][30] =
{ { "BayofIce" },{ "SunsetSea" },{ "IronmansBay" },{ "TheGoldenSound" },{ "RedwyneStraights" },
{ "WestSummerSea" },{ "EastSummerSea" },{ "SeaofDorne" },{ "ShipbreakerBay" },{ "BlackwaterBay" },
{ "TheNarrowSea" },{ "TheShiveringSea" } };

class SeaInfo: public SoldierInfo
{
public:
	SeaInfo();
	SeaInfo(const char _seaName[30]);
	char *SeaNameOutput();
	void SetPower();
	void RemovePower();
	char ownedHouse[20];
	bool havePower;
private:
	char seaName[30];
};
SeaInfo::SeaInfo(): havePower(false)
{
	const char _seaName[30] = "uninitialized";
	strcpy(seaName, _seaName);
	strcpy(ownedHouse, houseList[0]);
}
SeaInfo::SeaInfo(const char _seaName[30]): havePower(false)
{
	strcpy(seaName, _seaName);
	strcpy(ownedHouse, houseList[0]);
}
char *SeaInfo::SeaNameOutput()
{
	return seaName;
}

SeaInfo SeaInfoList[12];
void InitializeSea()
{
	for(int i=0; i<12; i++)
	{
		SeaInfoList[i] = SeaInfo(seaList[i]);
	}
}

#endif
