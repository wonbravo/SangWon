#pragma once
#include <vector>
#include "Actor.h"

using namespace std;

class Engine
{
public:
	Engine();
	virtual ~Engine();

	void Run();
	void SpawnActor(AActor* NewActor);

	static Engine* Instance;
	//�������ڸ��� ���ܹ�����.

	inline int GetKeyCode(){ return KeyCode; }

protected:
	void Input();
	void Tick();
	void Render();
	vector<AActor*> Actors;
	bool bIsRunning = true;
	int KeyCode;
};

#define GEngine		Engine::Instance
