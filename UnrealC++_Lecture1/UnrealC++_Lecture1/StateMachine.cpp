#include <iostream>
using namespace std;

class FState 
{
public:
	int ID;
	string Name;
	FState(){}
	FState(int ID)
	{
		this->ID = ID;
		nameset();
	}

	void nameset()
	{
		if (ID == 1) Name = "배회";
		else if (ID == 2)Name = "추격";
		else if (ID == 3) Name = "공격";
		else if (ID == 4) Name = "죽음";
	}

	//void Trans(string condition)
	//  {
	//	if (ID == 1)
	//  {
	//		if (condition == "적발견")
	//  {
	//			ID = 2;
	//		}
	//	}
	//	else if (ID == 2) {
	//		if (condition == "적놓침") {
	//			ID = 1;
	//		}
	//		else if (condition == "사정거리 접근") {
	//			ID = 3;
	//		}
	//	}
	//	else if (ID == 3) {
	//		if (condition == "사정거리 이탈") {
	//			ID = 2;
	//		}
	//		else if (condition == "HP없음") {
	//			ID = 4;
	//		}
	//	}
	//	nameset();
	//}

};

class Transition
{
public:
	FState State;
	string condition;

	
};