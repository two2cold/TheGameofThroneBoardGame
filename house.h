// Define houses
// Coded by Yuchen Liu

#ifndef HOUSE_H__
#define HOUSE_H__

extern const char houseList[7][20] = {{"neutral"},{"Lannister"},{"Baratheon"},{"Greyjoy"},{"Stark"},{"Tyrell"},{"Martell"}};

class HouseInfo
{
public:
	HouseInfo();
	HouseInfo(const char H[20]);
	HouseInfo(const char H[20], int T, int V, int C, int B, int Ca);
	int power;
	int throneRank;
	int valyrianRank;
	int crowRank;
	int barrel;
	int castle;
	void IncreaseBarrel();
	void DecreaseBarrel();
	void IncreaseCastle();
	void DecreaseCastle();
	void IncreasePower(int IP);
	void DecreasePower(int DP);
protected:
	char houseName[20];
};
HouseInfo::HouseInfo(): power(0), throneRank(0), valyrianRank(0), crowRank(0), barrel(0),castle(0)
{
	strcpy(houseName, houseList[0]);
};
HouseInfo::HouseInfo(const char H[20]): power(0), throneRank(0), valyrianRank(0), crowRank(0), barrel(0),castle(0)
{
	strcpy(houseName, H);
};
HouseInfo::HouseInfo(const char H[20], int T, int V, int C, int B, int Ca): power(0)
{
	strcpy(houseName, H);
	throneRank = T;
	valyrianRank = V;
	crowRank = C;
	barrel = B;
	castle = Ca;
};
void HouseInfo::IncreaseBarrel()
{
	barrel++;
};
void HouseInfo::DecreaseBarrel()
{
	barrel--;
};
void HouseInfo::IncreaseCastle()
{
	castle++;
};
void HouseInfo::DecreaseCastle()
{
	castle--;
};
void HouseInfo::IncreasePower(int IP)
{
	power = power + IP;
}
void HouseInfo::DecreasePower(int DP)
{
	power = power - DP;
}

HouseInfo neu;
HouseInfo La(houseList[1],2,6,1,2,1);
HouseInfo Ba(houseList[2],1,5,4,2,1);
HouseInfo Gr(houseList[3],5,1,6,2,1);
HouseInfo St(houseList[4],3,4,2,1,2);
HouseInfo Ty(houseList[5],6,2,5,2,1);
HouseInfo Ma(houseList[6],4,3,3,2,1);

#endif
