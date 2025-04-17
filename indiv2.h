#include <iostream>

using namespace std;

class Dish {
private:
	string dishName;
	double price;
public:
	Dish();
	Dish(string _name, double _price);

	string getName();
	double getPrice();
};