#include "indiv2.h"


string Dish::getName()
{
	return dishName;
}

double Dish::getPrice()
{
	return price;
}

void Dish::setName(string _name)
{
	dishName = _name;
}

void Dish::setPrice(double _price)
{
	price = _price;
}
