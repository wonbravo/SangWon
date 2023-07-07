#include "Engine.h"

Engine::Engine()
{
}

Engine::~Engine()
{
	for (auto Current : Actors)
	{
		delete Current;
	}
	Actors.clear();
}

void Engine::Run()
{
	//BeginPlay();
	while (bIsRunning)
	{
		Input();
		Tick();
		Render();
	}
	//EndPlay();
}

void Engine::SpawnActor(AActor* NewActor)
{
	Actors.push_back(NewActor);
}



void Engine::Input()
{
	//인풋을 액터가 받아도 되고 엔진이 받아도 된다.
	//일반적으로는 엔진이 받는다. 유니티만 액터가 받는다고 한다.

}

void Engine::Tick()
{
	//for (int i = 0; i < Actors.size(); ++i) 
	//{
	//Actors[i].Tick();
	//}

	//ranged for. 범위 기반 for 문이라고 한다.
	//위의 for문과 같은 역할을 한다고 한다.
	//근데 C++ 11~ C++14까지밖에 못 쓰나봄
	//AActor 대신 auto라고 적어도 되지만 권장사항은 아닌듯 하다
	for (auto Current : Actors)
	{
		Current->Tick();
	}
}

void Engine::Render()
{
	/*for (int i = 0; i < Actors.size(); ++i)
	{
		Actors[i].Render();
	}*/
	for (auto Current : Actors)
	{
		Current->Render();
	}
}
