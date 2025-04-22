#pragma once
#include <vector>

class AMilk;
class ASweetFish;
class AHerb;
class Branch;
class AItem;
class Garlic;
class GarlicMilk;

class AInventory
{
public:
	AInventory();
	virtual ~AInventory();

	std::vector<AItem*> GetAllItems()
	{
		return Items;
	}

	void AddItem(AItem* InItem);

	void UseItem(int Index);

protected:
	std::vector<AItem*> Items;
};

