#pragma once
class AActor
{
public:
	AActor();
	virtual ~AActor();

	int x;
	int y;
	char Shape;
	//string Name; 을 넣어준다면 각 액터들의 이름을 넣어줄 수 있을터이다.

	void input();
	virtual void Tick() = 0;
	// virtual ==자식에게도 Tick 요구사항이 있다면... 우리 새끼를 생각해주세요. 
	//자식이 부모 제치고 나부터 신경쓰세요 하면 void Tick() override; 라고 작성
	//=0을 해두면 자식은 무조건 이 함수를 만들어야한다. 내 뒤에 만드는 사람에게
	//강제할 수 있게 되는 것이지. 너 만들어!!
	void Render();
};

