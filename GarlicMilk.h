#pragma once
#include "Garlic.h"
#include "Milk.h"

class AGarlicMilk : public AGarlic, AMilk
{
public:
	AGarlicMilk();
	virtual ~AGarlicMilk();

	virtual void Use() override;
};

