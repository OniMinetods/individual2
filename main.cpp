#include "indiv2.h"

int main() {
	setlocale(LC_ALL, "Ru");
	Menu a;
	AdditivesMenu b;

	cout << "������������, ��� ����, ����� ������� ����, ������� <1>" << endl;
	int Enter;
	cin >> Enter;
	bool flag1 = true;

	// Greetings
	while (flag1) {
		if (Enter == 1)
		{
			a.showMenu();
			cout << endl;
			b.showAdditives();
			flag1 = false;
		}
		else
		{
			cout << "��������� ���� ������ �� ���������, ���������� ��� ���" << endl;
			cin >> Enter;
		}
	}

	cout << "������� ����� �����, ������� �� ������ ����������:" << endl;
		

	return 0;
}