#include <iostream>
#include "Inventory.h"
#include "Branch.h"
#include "Garlic.h"
#include "Herb.h"
#include "Milk.h"
#include "SweetFish.h"
#include "GarlicMilk.h"
#include "Item.h"

using namespace std;

int main()
{
	AInventory* Inventory = new AInventory();

	AItem* Inventory = new AGarlic();

	AGarlic* Garlic = dynamic_cast<AGarlic*>(Inventory);

	Inventory->AddItem(new ABranch);
	Inventory->AddItem(new AGarlic);
	Inventory->AddItem(new AHerb);
	Inventory->AddItem(new ASweetFish);

	Inventory->UseItem(0);
	Inventory->UseItem(2);
	Inventory->UseItem(1);
	Inventory->UseItem(3);

	return 0;
}