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
    //인터넷에서 긁어온 원하는 위치의 콘솔에 글자 출력하는 방법. 
    //인도인들을 찬양하라

	cout << Shape;
}
