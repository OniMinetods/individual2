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

void AdditivesMenu::showAdditives()
{
	cout << "Добавки: " << endl;
	for (int i = 0; i < 3; ++i) {
		cout << A[i].getName() << " | " << A[i].getPrice() << "RUB" << endl;
	}
}
