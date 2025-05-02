#include "indiv2.h"

int main() {
	setlocale(LC_ALL, "Ru");
	Menu menu;
	AdditivesMenu additivesMenu;

	cout << "Здравствуйте, для того, чтобы увидеть меню, введите <1>" << endl;
	char Enter;
	cin >> Enter;

	while (Enter != '1') {
			cout << "Введенный вами символ не распознан, попробуйте ещё раз" << endl;
			cin >> Enter;
	}
	
	menu.showMenu();
	cout << endl;
	additivesMenu.showAdditives();
	cout << endl;

	int dishChoice;
	cout << "Введите номер блюда, которое вы хотите приобрести (от 0 до 4):" << endl;
	cin >> dishChoice;

	while (dishChoice < 0 || dishChoice > 4) {
		cout << "Неверный выбор. Введите номер от 0 до 4: ";
		cin >> dishChoice;
	}

	Dish* dishes = menu.getDishes();
	Dish selectedDish = dishes[dishChoice];

	Additive* additives = additivesMenu.getAdditives();
	Additive selectedAdditives[3];
	int additivesCount = 0;

	cout << endl;
	
	char addMore;
	cout << "Хотите ли вы добавить добавки? (y/n): ";
	cin >> addMore;

	while (tolower(addMore) == 'y' && additivesCount < 3) {
		cout << "Введите номер добавки (0 - сыр, 1 - халапеньо, 2 - картошка фри): ";
		int addChoice;
		bool flag = true;
		cin >> addChoice;

		if (addChoice >= 0 && addChoice < 3 && flag) {
			selectedAdditives[additivesCount++] = additives[addChoice];
		}
		else {
			cout << "Неверный выбор добавки." << endl;
		}
		if (additivesCount < 3) {
			cout << "Добавить еще? (y/n): ";
			cin >> addMore;
		}
		else {
			cout << "Выбрано максимум добавок." << endl;
			break;
		}
	}
	cout << endl;

	double totalPrice = selectedDish.getPrice();
	for (int i = 0; i < additivesCount; ++i) {
		totalPrice += selectedAdditives[i].getPrice();
	}

	ofstream check("../check.txt");
	check << "Чек заказа\n";
	check << "Блюдо: " << selectedDish.getName() << " - " << selectedDish.getPrice() << " Rub\n";
	cout << "Ваш заказ:" << endl;
	cout << "Блюдо: " << selectedDish.getName() << " - " << selectedDish.getPrice() << " Rub" << endl;

	if (additivesCount > 0) {
		check << "Добавки:\n";
		cout << "Добавки:" << endl;
		for (int i = 0; i < additivesCount; ++i) {
			check << " - " << selectedAdditives[i].getName() << " - " << selectedAdditives[i].getPrice() << " Rub\n";
			cout << " - " << selectedAdditives[i].getName() << " - " << selectedAdditives[i].getPrice() << " Rub" << endl;
		}
	}

	check << "\nИтого: " << totalPrice << " Rub\n";
	cout << "Итого: " << totalPrice << " Rub" << endl;
	check.close();

	cout << "Чек сохранен в файл 'check.txt'" << endl;

	return 0;
}