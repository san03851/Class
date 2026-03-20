#pragma once
class Player
{
public:
	struct PlayerStat
	{
		int Hp = 0;
		int Mp = 0;
		int Exp = 0;
		int Level = 0;
	};

	struct PlayerId
	{
		int PlayerOne = 0;
	};

	struct PlayerPosition
	{
		int PlayerX = 0;
		int PlayerY = 0;
	};

	struct PlayerSkill
	{
		int slash = 1;
		int damage = 0;
	};

	struct PlayerInventory
	{
		int Size = 0;
		int GoldInv = 0;
		int* Items = new int[Size];
	};

	void PlayerControl(int** PlayerPos, int** WorldMap);

	void PlayerAttack(int** MonsterPos, int** PlayerPos, int** WorldMap);

	void PlayerPickupItems(int** ItemPos, int** PlayerPos, int** WorldMap);

};

