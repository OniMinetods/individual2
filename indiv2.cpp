#include "indiv2.h"

Dish::Dish()
{
	dishName = "Chicken Doner";
	price = 249;
}

Dish::Dish(string _name, double _price)
{
	dishName = _name;
	price = _price;
}

string Dish::getName()
{
	return dishName;
}

double Dish::getPrice()
{
	return price;
}
