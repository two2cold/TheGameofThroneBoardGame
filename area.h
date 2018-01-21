// Define areas
// Coded by Yuchen Liu

#ifndef AREA_H__
#define AREA_H__

extern const char landList[38][30] =
{{"CastleBlack"},{"Karhold"},{"Winterfell"},{"TheStonyShore"},{"WhiteHarbor"},
{"WidowsWatch"},{"FuntsFinger"},{"GreywaterWatch"},{"MoatCailin"},{"Pyke"},
{"Seagard"},{"TheTwins"},{"TheFingers"},{"TheMountainsofTheMoon"},{"TheEyrie"},
{"Riverrun"},{"Lannisport"},{"StoneySept"},{"HarrenHal"},{"CrackclawPoint"},
{"Dragonstone"},{"SearoadMarches"},{"Blackwater"},{"KingsLanding"},{"Highgarden"},
{"TheReach"},{"Kingswood"},{"Oldtown"},{"DornishMarches"},{"TheBoneway"},
{"StormsEnd"},{"ThreeTowers"},{"PrincesPass"},{"Yronwood"},{"Sunspear"},
{"TheArbor"},{"Starfall"},{"SaltShore"}};
extern const char seaList[][30] =
{{"BayofIce"},{"SunsetSea"},{"IronmansBay"},{"TheGoldenSound"},{"RedwyneStraights"},
{"WestSummerSea"},{"EastSummerSea"},{"SeaofDorne"},{"ShipbreakerBay"},{"BlackwaterBay"},
{"TheNarrowSea"},{"TheShiveringSea"}};

class LandInfo: public SoldierInfo
{
public:
	LandInfo();
	LandInfo(const char _landName[30], int _barrel, int _castle, int _crown);
	char *LandNameOutput();
	void SetPower();
	void RemovePower();
private:
	char landName[30];
	int barrel;
	int castle;
	int crown;
	bool havePower;
};
LandInfo::LandInfo(): barrel(0), castle(0), crown(0), havePower(false)
{
	const char _landName[30] = "uninitialized";
	strcpy(landName, _landName);
};
LandInfo::LandInfo(const char _landName[30], int _barrel, int _castle, int _crown): havePower(false)
{
	strcpy(landName, _landName);
	barrel = _barrel;
	castle = _castle;
	crown = _crown;
};
char *LandInfo::LandNameOutput()
{
	return landName;
};
void LandInfo::SetPower()
{
	havePower = true;
}
void LandInfo::RemovePower()
{
	havePower = false;
}

LandInfo CastleBlack(landList[0],0,0,1);
LandInfo Karhold(landList[1],0,0,1);
LandInfo Winterfell(landList[2],1,2,1);
LandInfo TheStonyShore(landList[3],1,0,0);
LandInfo WhiteHarbor(landList[4],0,1,0);
LandInfo WidowsWatch(landList[5],1,0,0);
LandInfo FuntsFinger(landList[6],0,1,0);
LandInfo GreywaterWatch(landList[7],1,0,0);
LandInfo MoatCailin(landList[8],0,1,0);
LandInfo Pyke(landList[9],1,2,1);
LandInfo Seagard(landList[10],1,2,1);
LandInfo TheTwins(landList[11],0,0,1);
LandInfo TheFingers(landList[12],1,0,0);
LandInfo TheMountainsofTheMoon(landList[13],1,0,0);
LandInfo TheEyrie(landList[14],1,1,1);
LandInfo Riverrun(landList[15],1,2,1);
LandInfo Lannisport(landList[16],2,2,0);
LandInfo StoneySept(landList[17],0,0,1);
LandInfo HarrenHal(landList[18],0,1,1);
LandInfo CrackclawPoint(landList[19],0,1,0);
LandInfo Dragonstone(landList[20],1,2,1);
LandInfo SearoadMarches(landList[21],1,0,0);
LandInfo Blackwater(landList[22],2,0,0);
LandInfo KingsLanding(landList[23],0,2,2);
LandInfo Highgarden(landList[24],2,2,0);
LandInfo TheReach(landList[25],0,1,0);
LandInfo Kingswood(landList[26],1,0,1);
LandInfo Oldtown(landList[27],0,2,0);
LandInfo DornishMarches(landList[28],0,0,1);
LandInfo TheBoneway(landList[29],0,0,1);
LandInfo StormsEnd(landList[30],0,1,0);
LandInfo ThreeTowers(landList[31],1,0,0);
LandInfo PrincesPass(landList[32],1,0,1);
LandInfo Yronwood(landList[33],0,1,0);
LandInfo Sunspear(landList[34],1,2,1);
LandInfo TheArbor(landList[35],0,0,1);
LandInfo Starfall(landList[36],1,1,0);
LandInfo SaltShore(landList[37],1,0,0);

#endif
