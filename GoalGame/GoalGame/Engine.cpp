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
	//��ǲ�� ���Ͱ� �޾Ƶ� �ǰ� ������ �޾Ƶ� �ȴ�.
	//�Ϲ������δ� ������ �޴´�. ����Ƽ�� ���Ͱ� �޴´ٰ� �Ѵ�.

}

void Engine::Tick()
{
	//for (int i = 0; i < Actors.size(); ++i) 
	//{
	//Actors[i].Tick();
	//}

	//ranged for. ���� ��� for ���̶�� �Ѵ�.
	//���� for���� ���� ������ �Ѵٰ� �Ѵ�.
	//�ٵ� C++ 11~ C++14�����ۿ� �� ������
	//AActor ��� auto��� ��� ������ ��������� �ƴѵ� �ϴ�
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
