// Update house information
// Coded by Yuchen Liu

void UpdateCastle()
{
	for(int i=0; i<6; i++)
	{
		HouseInfoList[i].castle = 0;
		for(int j=0; j<38; j++)
		{
			if(!strcmp(LandInfoList[j].ownedHouse, houseList[i]))
			HouseInfoList[i].castle += LandInfoList[j].castle;
		}
	}
}

void UpdateBarrel()
{
	for(int i=0; i<6; i++)
	{
		HouseInfoList[i].barrel = 0;
		for(int j=0; j<38; j++)
		{
			if(!strcmp(LandInfoList[j].ownedHouse, houseList[i]))
			HouseInfoList[i].barrel += LandInfoList[j].barrel;
		}
	}
}

void UpdatePower(int powerToken)
{
	for(int i=0; i<6; i++)
	{
		for(int j=0; j<38; j++)
		{
			if(!strcmp(LandInfoList[j].ownedHouse, houseList[i]))
			HouseInfoList[i].power += LandInfoList[j].power;
		}
		HouseInfoList[i].power += powerToken;
	}
}
