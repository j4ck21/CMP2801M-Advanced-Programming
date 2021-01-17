#pragma once
#include "ItemList.h"
#include "Menu.h"

// Order inherits from ItemList
class Order : public ItemList {
	double total;

public:
	int Index(Menu);
};