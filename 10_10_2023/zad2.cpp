﻿#include <iostream>;

using namespace std;

int main()
{
	string haslo;
	string login;
	do {
		cout << "Podaj login: " << endl;
		cin >> login;
		cout << "Podaj haslo: " << endl;
		cin >> haslo;
		if (login == "admin" && haslo == "haslo") {
			cout << "Zostales zalogowany" << endl;
			break;
		}
		else if (login == "admin1" && haslo == "haslo1") {
			cout << "Zostales zalogowany" << endl;
			break;
		}
		else if (login == "admin2" && haslo == "haslo2") {
			cout << "Zostales zalogowany" << endl;
			break;
		}
		else
			cout << "Bledne dane! " << endl;
			cout << "Sprobuj ponownie! " << endl;
	} while (true);
	return 0;
}