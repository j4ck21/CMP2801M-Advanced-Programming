#include "Beverage.h"
#include "Order.h"
#include "Menu.h"
#include "MainCousre.h"
#include "Appetiser.h"
#include <vector>
#include <iostream>
#include "Item.h"

using namespace std;


//*Foundation for adding the total of the prices of the items ordered.
//*Set up a two for one offer
int Calc(Item) {

	double Total = &Item::priceA + &Item::priceM + &Item::priceB;
	return Total;

}