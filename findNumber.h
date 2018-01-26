// Find land and sea number
// Coded by Yuchen Liu

#ifndef FINDNUMBER_H__
#define FINDNUMBER_H__

extern const char landList[38][30] =
{{"CastleBlack"},{"Karhold"},{"Winterfell"},{"TheStonyShore"},{"WhiteHarbor"},
{"WidowsWatch"},{"FuntsFinger"},{"GreywaterWatch"},{"MoatCailin"},{"Pyke"},
{"Seagard"},{"TheTwins"},{"TheFingers"},{"TheMountainsofTheMoon"},{"TheEyrie"},
{"Riverrun"},{"Lannisport"},{"StoneySept"},{"HarrenHal"},{"CrackclawPoint"},
{"Dragonstone"},{"SearoadMarches"},{"Blackwater"},{"KingsLanding"},{"Highgarden"},
{"TheReach"},{"Kingswood"},{"Oldtown"},{"DornishMarches"},{"TheBoneway"},
{"StormsEnd"},{"ThreeTowers"},{"PrincesPass"},{"Yronwood"},{"Sunspear"},
{"TheArbor"},{"Starfall"},{"SaltShore"}};

extern const char seaList[12][30] =
{{"BayofIce"},{"SunsetSea"},{"IronmansBay"},{"TheGoldenSound"},{"RedwyneStraights"},
{"WestSummerSea"},{"EastSummerSea"},{"SeaofDorne"},{"ShipbreakerBay"},{"BlackwaterBay"},
{"TheNarrowSea"},{"TheShiveringSea"}};

int FindLandNumber(const char _landList[30])
{
	for(int i=0; i<38; i++)
	{
		if(!strcmp(_landList, landList[i]))
		return i;
	}
	return -1;
};
int FindSeaNumber(const char _seaList[30])
{
	for(int i=0; i<38; i++)
	{
		if(!strcmp(_seaList, seaList[i]))
		return i;
	}
	return -1;
};

#endif
