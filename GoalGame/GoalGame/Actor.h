#pragma once
class AActor
{
public:
	AActor();
	virtual ~AActor();

	int x;
	int y;
	char Shape;
	//string Name; �� �־��شٸ� �� ���͵��� �̸��� �־��� �� �������̴�.

	void input();
	virtual void Tick() = 0;
	// virtual ==�ڽĿ��Ե� Tick �䱸������ �ִٸ�... �츮 ������ �������ּ���. 
	//�ڽ��� �θ� ��ġ�� ������ �Ű澲���� �ϸ� void Tick() override; ��� �ۼ�
	//=0�� �صθ� �ڽ��� ������ �� �Լ��� �������Ѵ�. �� �ڿ� ����� �������
	//������ �� �ְ� �Ǵ� ������. �� �����!!
	void Render();
};

