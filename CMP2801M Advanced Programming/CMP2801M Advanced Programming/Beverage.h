#pragma once
#include "Item.h"

// Beverage inherits from Item
class Beverage : public Item {
	int volume;
	double abv;
};