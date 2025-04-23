#include <iostream>

using namespace std;

class Menu {
private:
	Dish Dishes[];
public:
	void showMenu();
};

class Dish {
protected:
	string dishName;
	double price;
public:
	Dish(string _name = "Empty name", double _price = 0) 
		: dishName(_name), price(_price) {} 

	string getName();
	double getPrice();

	void setName(string _name);
	void setPrice(double _price);
};

class chickenDoner : public Dish {
public:
	chickenDoner(string _name = "Chicken Doner", double _price = 249) 
		: dishName(_name), price(_price) {}
};