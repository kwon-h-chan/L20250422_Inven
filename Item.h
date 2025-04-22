#pragma once
class AItem
{
public:
	AItem();
	virtual ~AItem();
	//순수 가상 함수 -> 부모에서 구현 안하고 자식에서 무조건 구현해야 함.
	virtual void Use() = 0;
};

