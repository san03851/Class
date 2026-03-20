#pragma once
class UWorld
{
public:
	UWorld();
	~UWorld();
	struct MapObject
	{
		int Empty = 1000;
		int Wall = 1001;
		int Tree = 1002;
	};
	int WorldSize = 0;
	int* World = new int[WorldSize];

	void CreateWorld(int Row, int Col, int* World);

	void FillWorld(int Row, int Col, struct MapObject *Aptr, int* World);

	void PositionActors(int ActorPosX, int ActorPosY, struct PlayerId *PidAptr, struct MonsterId* MidAptr, int* World);
};

