// Define seas
// Coded by Yuchen Liu

#ifndef SEA_H__
#define SEA_H__

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
private:
	char seaName[30];
};
SeaInfo::SeaInfo()
{
	const char _seaName[30] = "uninitialized";
	strcpy(seaName, _seaName);
}
SeaInfo::SeaInfo(const char _seaName[30])
{
	strcpy(seaName, _seaName);
}
char *LandInfo::SeaNameOutput()
{
	return seaName;
};

#endif
