#pragma once
#include "ItemList.h"
#include <iostream>	
#include <fstream>
using namespace std;

class Menu : public ItemList
{
	public:
		Menu(string);
		vector<string> parseline(string);
};
