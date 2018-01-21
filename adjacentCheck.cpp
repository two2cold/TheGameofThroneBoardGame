// Adjacent check
// Coded by Yuchen Liu

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
