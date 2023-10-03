#include <iostream>

using namespace std;

int main()
{
	int a;
	cout << "Podaj liczbe: " << endl;
	cin >> a;
	if (a <= 30)
	{
		switch (a)
		{
		case 1:
			cout << "bmw" << endl;
			break;
		case 2:
			cout << "kałdi" << endl;
			break;
		case 3:
			cout << "nissan" << endl;
			break;
		case 4:
			cout << "ford" << endl;
			break;
		case 5:
			cout << "fiat" << endl;
			break;
		case 6:
			cout << "toyota" << endl;
			break;
		case 7:
			cout << "cupra" << endl;
			break;
		case 8:
			cout << "Citroën" << endl;
			break;
		case 9:
			cout << "mercedes" << endl;
			break;
		case 10:
			cout << "dacia" << endl;
			break;
		case 11:
			cout << "volvo" << endl;
			break;
		case 12:
			cout << "skoda" << endl;
			break;
		case 13:
			cout << "seat" << endl;
			break;
		case 14:
			cout << "hyundai" << endl;
			break;
		case 15:
			cout << "honda" << endl;
			break;
		case 16:
			cout << "Volkswagen" << endl;
			break;
		case 17:
			cout << "kia" << endl;
			break;
		case 18:
			cout << "bugatti" << endl;
			break;
		case 19:
			cout << "acura" << endl;
			break;
		case 20:
			cout << "ferrari" << endl;
			break;
		case 21:
			cout << "chevrolet" << endl;
			break;
		case 22:
			cout << "dodge" << endl;
			break;
		case 23:
			cout << "bentley" << endl;
			break;
		case 24:
			cout << "jeep" << endl;
			break;
		case 25:
			cout << "jaguar" << endl;
			break;
		case 26:
			cout << "mazda" << endl;
			break;
		case 27:
			cout << "maybach" << endl;
			break;
		case 28:
			cout << "mini" << endl;
			break;
		case 29:
			cout << "pagani" << endl;
			break;
		case 30:
			cout << "porshe" << endl;
			break;

		}
	}
	else
		cout << "Bledna liczba" << endl;
}
