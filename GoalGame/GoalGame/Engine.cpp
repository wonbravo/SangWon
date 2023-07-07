#include "Engine.h"
#include <conio.h>
//이건 input 받는 함수다. _getch() 쓸 수 있게 됨
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
	//인풋을 액터가 받아도 되고 엔진이 받아도 된다.
	//일반적으로는 엔진이 받는다. 유니티만 액터가 받는다고 한다.
	//cin 은 매번 엔터 입력해야함
	KeyCode = _getch();
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
		//APlayer* Player = dynamic_cast<APlayer*>(Current);
		////형변환. player 라는 애한테 APlayer가 있다면 그것을 넣는것이다.
		//if (Player != nullptr)
		//{
		//	Player->x++;
		//}
		//AMonster* Monster = dynamic_cast<AMonster*>(Current);
		////같은 원리의 형변환
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
