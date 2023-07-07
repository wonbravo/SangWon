#include "Engine.h"
#include <conio.h>
//�̰� input �޴� �Լ���. _getch() �� �� �ְ� ��
#include "Player.h"
#include "Monster.h"

Engine* Engine::Instance = nullptr;

Engine::Engine()
{
	Instance = this;
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
	//cin �� �Ź� ���� �Է��ؾ���
	KeyCode = _getch();
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
		//APlayer* Player = dynamic_cast<APlayer*>(Current);
		////����ȯ. player ��� ������ APlayer�� �ִٸ� �װ��� �ִ°��̴�.
		//if (Player != nullptr)
		//{
		//	Player->x++;
		//}
		//AMonster* Monster = dynamic_cast<AMonster*>(Current);
		////���� ������ ����ȯ
		//if (Monster != nullptr)
		//{
		//	Monster->y++;
		//}

		Current->Tick();
	}
}

void Engine::Render()
{
	system("cls");

	/*for (int i = 0; i < Actors.size(); ++i)
	{
		Actors[i].Render();
	}*/
	for (auto Current : Actors)
	{
		Current->Render();
	}
}
