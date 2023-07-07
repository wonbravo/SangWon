#pragma once
class AActor
{
public:
	AActor();
	virtual ~AActor();

	int x;
	int y;
	char Shape;

	void input();
	void Tick();
	void Render();
};

