#pragma once
#include "Headerfile.h"


class Engine
{
public:
	void PrintWorld(struct MonsterComp* Monst, struct PlayerComp* Player, int* World);

	void UpdatePlayer(struct Playerstat* PlayerStats, struct Monsterstats* MonsterStats, struct PlayerPosition* PlayerPos);

	void UpdateMonster(struct Monsterstats* MonsterStats, struct MonsterPosition* MonsterPos);
};

