#include "indiv2.h"

int main() {
	setlocale(LC_ALL, "Ru");
	Menu a;
	AdditivesMenu b;

	cout << "«дравствуйте, дл€ того, чтобы увидеть меню, введите <1>" << endl;
	int Enter;
	cin >> Enter;
	bool flag1, flag2 = true;

	// Greetings
	while (flag1) {
		if (Enter == 1)
		{
			a.showMenu();
			cout << endl;
			b.showAdditives();
			flag = false;
		}
		else
		{
			cout << "¬веденный вами символ не распознан, попробуйте ещЄ раз" << endl;
			cin >> Enter;
		}
	}

	cout << "¬ведите номер блюда, которое вы хотите приобрести:" << endl;
		

	return 0;
}