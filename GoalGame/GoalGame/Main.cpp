#include <iostream>
#include "Engine.h"
#include "Player.h"
#include "Monster.h"
#include "Floor.h"
#include "Wall.h"
using namespace std;

int main()
{
	//왜 포인터로 만들었을까? 간단하다. 지우는 순간을 내가 결정하기 위해서
	//나중에 내가 Delete를 할 수 있는것은 포인터니까.
	Engine* MyEngine = new Engine();

	//이것이...
	/*APlayer* MyPlayer = new APlayer;
	AMonster* MyMonster;
	MyMonster.x = 10;
	MyMonster.y = 10;*/

	MyEngine->SpawnActor(new APlayer());
	MyEngine->SpawnActor(new AMonster());
	//그래 이것이 로딩이다. Map파일

	MyEngine->Run(); 

	delete MyEngine;

	return 0;
}