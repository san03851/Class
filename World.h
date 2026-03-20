#pragma once
class World
{
public:
	struct MapObject
	{
		int Empty = 1000;
		int Wall = 1001;
		int Tree = 1002;
	};

	void CreateWorld(int Row, int Col);

	void FillWorld(int Row, int Col, struct MapObject *Aptr);

	void PositionActors(int ActorPosX, int ActorPosY, struct PlayerId *PidAptr, struct MonsterId* MidAptr);

	void UpdatePlayer(struct Playerstat *PlayerStats, struct Monsterstats *MonsterStats, struct PlayerPosition *PlayerPos);

	void UpdateMonster(struct Monsterstats *MonsterStats, struct MonsterPosition *MonsterPos);
};

