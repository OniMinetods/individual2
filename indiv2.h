#include <iostream>

using namespace std;

class Dish {
protected:
	string dishName;
	double price;
public:
	Dish(string _name = "Empty name", double _price = 0) : dishName(_name), price(_price) {} 

	string getName();
	double getPrice();

	void setName(string _name);
	void setPrice(double _price);
};

class chickenDoner : public Dish {
public:
	chickenDoner(string _name = "Chicken Doner", double _price = 249) { dishName = _name; price = _price; }
};

class chickenDonerCheesePita : public Dish {
	chickenDonerCheesePita(string _name = "Chicken Doner in Cheese Pita", double _price = 289) { dishName = _name; price = _price; }
};

class beefDoner : public Dish {
	beefDoner(string _name = "Beef Doner", double _price = 319) { dishName = _name; price = _price; }
};

class porkDoner : public Dish {
	porkDoner(string _name = "Pork Doner", double _price = 299) { dishName = _name; price = _price; }
};

class friedDoner : public Dish {
	friedDoner(string _name = "Fried Doner (Ўаурма жаренна€ в кл€ре)", double _price = 369) { dishName = _name; price = _price; }
};

class Additive {
protected:
	string additiveName;
	double price;
public:
	Additive(string _name = "No additives", double _price = 0) : additiveName(_name), price(_price) {}

	string getName() { return additiveName; }
	double getPrice() { return price; }
};

class Cheese : public Additive {
public:
	Cheese(string _name = "Cheese", double _price = 20) { additiveName = _name; price = _price; }
};

class Jalapeno : public Additive {
public:
	Jalapeno(string _name = "Jalapeno", double _price = 20) { additiveName = _name; price = _price; }
};

class frenchFries : public Additive {
public:
	frenchFries(string _name = "French Fries", double _price = 30) { additiveName = _name; price = _price; }
};

class AdditivesMenu {
private:
	Additive A[3];
public:
	AdditivesMenu() {
		A[0] = Cheese();
		A[1] = Jalapeno();
		A[2] = frenchFries();
	}

	void showAdditives();
};

class Menu {
private:
	Dish Dishes[5];
public:
	void showMenu();
};