#include "Actor.h"
#include <iostream>
#include <Windows.h>
using namespace std;

AActor::AActor()
{
}

AActor::~AActor()
{
}

void AActor::input()
{
}

void AActor::Tick()
{
}

void AActor::Render()
{
    COORD Cur;
    Cur.X = x;
    Cur.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Cur);
    //���ͳݿ��� �ܾ�� ���ϴ� ��ġ�� �ֿܼ� ���� ����ϴ� ���. 
    //�ε��ε��� �����϶�

	cout << Shape;
}
