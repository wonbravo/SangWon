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
		if (ID == 1) Name = "��ȸ";
		else if (ID == 2)Name = "�߰�";
		else if (ID == 3) Name = "����";
		else if (ID == 4) Name = "����";
	}

	//void Trans(string condition)
	//  {
	//	if (ID == 1)
	//  {
	//		if (condition == "���߰�")
	//  {
	//			ID = 2;
	//		}
	//	}
	//	else if (ID == 2) {
	//		if (condition == "����ħ") {
	//			ID = 1;
	//		}
	//		else if (condition == "�����Ÿ� ����") {
	//			ID = 3;
	//		}
	//	}
	//	else if (ID == 3) {
	//		if (condition == "�����Ÿ� ��Ż") {
	//			ID = 2;
	//		}
	//		else if (condition == "HP����") {
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