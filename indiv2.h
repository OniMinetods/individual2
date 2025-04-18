#include <iostream>

using namespace std;

class Dish {
private:
	string dishName;
	double price;
public:
	Dish(string _name = "Chicken Doner", double _price = 249) : dishName(_name), price(_price) {} 

	string getName();
	double getPrice();
};