#pragma once
class AItem
{
public:
	AItem();
	virtual ~AItem();
	//���� ���� �Լ� -> �θ𿡼� ���� ���ϰ� �ڽĿ��� ������ �����ؾ� ��.
	virtual void Use() = 0;
};

