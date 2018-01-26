// Define soldiers
// Coded by Yuchen Liu

#ifndef SOLDIER_H__
#define SOLDIER_H__

class SoldierInfo
{
public:
	char house[20];
	int footman, knight, siege;
	int ship;
	int footmanDefeat;
	int knightDefeat;
	int shipDefeat;
	SoldierInfo();
	SoldierInfo(const char houseTemp[20], int footmanTemp, int knightTemp, int siegeTemp, int shipTemp);
	int AttackSum();
	int DefenceSum();
	int SoldierSum();
private:
	int attackFootman, defenceFootman;
	int attackKnight, defenceKnight;
	int attackSiege, defenceSiege;
	int attackShip, defenceShip;
};
SoldierInfo::SoldierInfo():house("neutral"), footman(0), knight(0), siege(0), ship(0), footmanDefeat(0), knightDefeat(0), shipDefeat(0)
{
	attackFootman = 1; defenceFootman = 1;
	attackKnight = 2; defenceKnight = 2;
	attackSiege = 4; defenceSiege = 0;
	attackShip = 1; defenceShip = 1;
}
SoldierInfo::SoldierInfo(const char houseTemp[20], int footmanTemp, int knightTemp, int siegeTemp, int shipTemp): footmanDefeat(0), knightDefeat(0), shipDefeat(0)
{
	strcpy(house, houseTemp);
	footman = footmanTemp;
	knight = knightTemp;
	siege = siegeTemp;
	ship = shipTemp;
	attackFootman = 1; defenceFootman = 1;
	attackKnight = 2; defenceKnight = 2;
	attackSiege = 4; defenceSiege = 0;
	attackShip = 1; defenceShip = 1;
}
int SoldierInfo::AttackSum()
{
	return footman*attackFootman + knight*attackKnight + siege*attackSiege + ship*attackShip;
}
int SoldierInfo::DefenceSum()
{
	return footman*defenceFootman + knight*defenceKnight + siege*defenceSiege + ship*defenceShip;
}
int SoldierInfo::SoldierSum()
{
	return footman + knight + siege + ship;
}

#endif
