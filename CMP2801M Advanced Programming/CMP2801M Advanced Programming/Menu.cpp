#include <iostream>
#include <vector>
#include <string>
#include <list>
#include "Menu.h"
#include "ItemList.h"
#include "MainCousre.h"
#include "Appetiser.h"
#include "Beverage.h"
#include "Item.h"


using namespace std;


Menu::Menu(std::string file) {
	ofstream open_file(file); //opens the given file form the user.
	string line;
	vector<string> MenuItem;
	list<string> NewItem;


	if (open_file.is_open()) { //checks to see if file is open
		while (getline(open_file, line)) {

			MenuItem = Menu::parseline(line);//creates a vector of pointers

			//adds each item from the csv to a list for each catagory.
			Item* NewItem;//*Need to declare list for items
			if (MenuItem[0] == "a") {
				NewItem = new Appetiser ((MenuItem[1]), (MenuItem[2]), (MenuItem[3]), (MenuItem[4]), (MenuItem[5]));
				add(NewItem, 'a');//"Need to add a add function
			}
			else if (MenuItem[0] == "m") {
				NewItem = new MainCousre ((MenuItem[1]), (MenuItem[2]) (MenuItem[3]));
				add(NewItem, 'm');
			}
			else if (MenuItem[0] == "b") {
				NewItem = new Beverage ((MenuItem[1]), (MenuItem[2]), (MenuItem[3]), (MenuItem[6]),(MenuItem[7]));
				add(NewItem, 'b');
			}
		}
		open_file.close();
	}
	else {
		cout << "Sorry this file could not be reached please try again.";
		exit(EXIT_FAILURE);
	}
}