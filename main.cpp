#include "indiv2.h"

int main() {
	setlocale(LC_ALL, "Ru");
	Dish a;
	chickenDoner b;
	AdditivesMenu c;
	c.showAdditives();
	cout << a.getName() << endl;
	cout << b.getName() << endl;
	return 0;
}