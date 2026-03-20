#pragma once

class Monster
{
public:
	Monster();
	~Monster();
	struct MonsterStats
	{
		int Hp = 0;
		int Mp = 0;
		int AttackPower = 0;
		int Exp = 0;
	};

	struct MonsterPosition
	{
		int MonsterX;
		int MonsterY;
	};

	struct MonsterID
	{
		int Boar = 100;
		int Slime = 101;
		int Goblin = 102;

	};

	struct MonsterComp
	{
		struct MonsterID Kind;
		struct MonsterStats Stats;
		struct MonsterPosition MonsterPos;
	};

	void MonsterAttack(int** PlayerPos, int** MonsterPos);

	void MoveMonster(int** Destination, int** MonsterPos, struct MonsterID *Mid);

	void DeathDropMonster(int Gold, int* Item, int** MonsterPos);
};

