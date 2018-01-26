// Define areas
// Coded by Yuchen Liu

#ifndef LAND_H__
#define LAND_H__

class LandInfo
{
public:
	LandInfo();
	LandInfo(const char _landName[30], int _barrel, int _castle, int _power);
	LandInfo(const char _landName[30], int _barrel, int _castle, int _power, bool _havePortconst, const char _closeSea[30]);
	char *LandNameOutput();
	char *CloseSeaOutput();
	bool HavePortOutput();
	char ownedHouse[20];
	int barrel;
	int castle;
	int power;
	bool havePower;
	SoldierInfo Soldier;
	SoldierInfo PortSoldier;
private:
	bool havePort;
	char landName[30];
	char closeSea[30];
};
LandInfo::LandInfo(): barrel(0), castle(0), power(0), havePower(false), havePort(false)
{
	const char _landName[30] = "uninitialized";
	const char _closeSea[30] = "none";
	strcpy(landName, _landName);
	strcpy(ownedHouse, houseList[6]);
	strcpy(closeSea, _closeSea);
}
LandInfo::LandInfo(const char _landName[30], int _barrel, int _castle, int _power): havePower(false), havePort(false)
{
	const char _closeSea[30] = "none";
	strcpy(landName, _landName);
	strcpy(ownedHouse, houseList[6]);
	strcpy(closeSea, _closeSea);
	barrel = _barrel;
	castle = _castle;
	power = _power;
}
LandInfo::LandInfo(const char _landName[30], int _barrel, int _castle, int _power, bool _havePort, const char _closeSea[30]): havePower(false)
{
	strcpy(landName, _landName);
	strcpy(ownedHouse, houseList[6]);
	strcpy(closeSea, _closeSea);
	barrel = _barrel;
	castle = _castle;
	power = _power;
	havePort = _havePort;
}
char *LandInfo::LandNameOutput()
{
	return landName;
}
char *LandInfo::CloseSeaOutput()
{
	return closeSea;
}
bool LandInfo::HavePortOutput()
{
	return havePort;
}

LandInfo LandInfoList[38] =
{LandInfo(landList[0],0,0,1),
LandInfo(landList[1],0,0,1),
LandInfo(landList[2],1,2,1,true,seaList[0]),
LandInfo(landList[3],1,0,0),
LandInfo(landList[4],0,1,0,true,seaList[10]),
LandInfo(landList[5],1,0,0),
LandInfo(landList[6],0,1,0),
LandInfo(landList[7],1,0,0),
LandInfo(landList[8],0,1,0),
LandInfo(landList[9],1,2,1,true,seaList[2]),
LandInfo(landList[10],1,2,1),
LandInfo(landList[11],0,0,1),
LandInfo(landList[12],1,0,0),
LandInfo(landList[13],1,0,0),
LandInfo(landList[14],1,1,1),
LandInfo(landList[15],1,2,1),
LandInfo(landList[16],2,2,0,true,seaList[3]),
LandInfo(landList[17],0,0,1),
LandInfo(landList[18],0,1,1),
LandInfo(landList[19],0,1,0),
LandInfo(landList[20],1,2,1,true,seaList[8]),
LandInfo(landList[21],1,0,0),
LandInfo(landList[22],2,0,0),
LandInfo(landList[23],0,2,2),
LandInfo(landList[24],2,2,0),
LandInfo(landList[25],0,1,0),
LandInfo(landList[26],1,0,1),
LandInfo(landList[27],0,2,0,true,seaList[4]),
LandInfo(landList[28],0,0,1),
LandInfo(landList[29],0,0,1),
LandInfo(landList[30],0,1,0,true,seaList[8]),
LandInfo(landList[31],1,0,0),
LandInfo(landList[32],1,0,1),
LandInfo(landList[33],0,1,0),
LandInfo(landList[34],1,2,1,true,seaList[6]),
LandInfo(landList[35],0,0,1),
LandInfo(landList[36],1,1,0),
LandInfo(landList[37],1,0,0)};

#endif
