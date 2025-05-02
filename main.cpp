#include "indiv2.h"

int main() {
	setlocale(LC_ALL, "Ru");
	Menu menu;
	AdditivesMenu additivesMenu;

	cout << "������������, ��� ����, ����� ������� ����, ������� <1>" << endl;
	char Enter;
	cin >> Enter;

	while (Enter != '1') {
			cout << "��������� ���� ������ �� ���������, ���������� ��� ���" << endl;
			cin >> Enter;
	}
	
	menu.showMenu();
	cout << endl;
	additivesMenu.showAdditives();
	cout << endl;

	int dishChoice;
	cout << "������� ����� �����, ������� �� ������ ���������� (�� 0 �� 4):" << endl;
	cin >> dishChoice;

	while (dishChoice < 0 || dishChoice > 4) {
		cout << "�������� �����. ������� ����� �� 0 �� 4: ";
		cin >> dishChoice;
	}

	Dish* dishes = menu.getDishes();
	Dish selectedDish = dishes[dishChoice];

	Additive* additives = additivesMenu.getAdditives();
	Additive selectedAdditives[3];
	int additivesCount = 0;

	cout << endl;
	
	char addMore;
	cout << "������ �� �� �������� �������? (y/n): ";
	cin >> addMore;

	while (tolower(addMore) == 'y' && additivesCount < 3) {
		cout << "������� ����� ������� (0 - ���, 1 - ���������, 2 - �������� ���): ";
		int addChoice;
		bool flag = true;
		cin >> addChoice;

		if (addChoice >= 0 && addChoice < 3 && flag) {
			selectedAdditives[additivesCount++] = additives[addChoice];
		}
		else {
			cout << "�������� ����� �������." << endl;
		}
		if (additivesCount < 3) {
			cout << "�������� ���? (y/n): ";
			cin >> addMore;
		}
		else {
			cout << "������� �������� �������." << endl;
			break;
		}
	}
	cout << endl;

	double totalPrice = selectedDish.getPrice();
	for (int i = 0; i < additivesCount; ++i) {
		totalPrice += selectedAdditives[i].getPrice();
	}

	ofstream check("../check.txt");
	check << "��� ������\n";
	check << "�����: " << selectedDish.getName() << " - " << selectedDish.getPrice() << " Rub\n";
	cout << "��� �����:" << endl;
	cout << "�����: " << selectedDish.getName() << " - " << selectedDish.getPrice() << " Rub" << endl;

	if (additivesCount > 0) {
		check << "�������:\n";
		cout << "�������:" << endl;
		for (int i = 0; i < additivesCount; ++i) {
			check << " - " << selectedAdditives[i].getName() << " - " << selectedAdditives[i].getPrice() << " Rub\n";
			cout << " - " << selectedAdditives[i].getName() << " - " << selectedAdditives[i].getPrice() << " Rub" << endl;
		}
	}

	check << "\n�����: " << totalPrice << " Rub\n";
	cout << "�����: " << totalPrice << " Rub" << endl;
	check.close();

	cout << "��� �������� � ���� 'check.txt'" << endl;

	return 0;
}