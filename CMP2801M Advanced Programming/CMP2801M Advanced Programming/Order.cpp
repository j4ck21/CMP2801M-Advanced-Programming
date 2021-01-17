#include "order.h"
#include "Menu.h"
#include "Item.h"
#include <iostream>
#include <vector>

using namespace std;

//*Come back and amend once other store functions have been established.
int Order::Index(Menu menu, int num) {


	std::cin >> "What item you you like to remove" << num;
	vector<int> ChangeMenu;
	copy(menu.begin(), menu.end(), back_inster(ChangeMenu));
	ChangeMenu.push_back(-num);

	return ChangeMenu;
//* and the function to inform user once Calc Price has been setup
//*add item two from order list to price to calculate total cost.

}

//*Fondation for return the ordered price to the price viable.
int Item::priceM(double Price) {

	Price price = Price * MainCousre[2];
	return Price;

}

int Item::priceA(double Price) {
	
	Price price = Price * Appetiser[2];
	return Price;

}

int Item::priceB(double Price) {
	
	Price price = Price * Beverage[2];
	return Price;
}