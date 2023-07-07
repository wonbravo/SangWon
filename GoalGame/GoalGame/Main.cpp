#include <iostream>
#include "Engine.h"
#include "Player.h"
#include "Monster.h"
#include "Floor.h"
#include "Wall.h"
using namespace std;

int main()
{
	//�� �����ͷ� ���������? �����ϴ�. ����� ������ ���� �����ϱ� ���ؼ�
	//���߿� ���� Delete�� �� �� �ִ°��� �����ʹϱ�.
	Engine* MyEngine = new Engine();

	//�̰���...
	/*APlayer* MyPlayer = new APlayer;
	AMonster* MyMonster;
	MyMonster.x = 10;
	MyMonster.y = 10;*/

	MyEngine->SpawnActor(new APlayer());
	MyEngine->SpawnActor(new AMonster());
	//�׷� �̰��� �ε��̴�. Map����

	MyEngine->Run(); 

	delete MyEngine;

	return 0;
}