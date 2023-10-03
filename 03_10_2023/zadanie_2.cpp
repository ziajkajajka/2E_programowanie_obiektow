#include <iostream>

using namespace std;

int main()
{
	int a;
	int bokkw;
	int pole;
	int boktr1;
	int boktr2;
	int wysokosc;
	int bokro;
	int boktro;
	cout << "podaj polejakiej figury chcesz obliczyc" << endl;
	cout << "1 - kwadrat" << endl;
	cout << "2 - trapez" << endl;
	cout << "3 - romb" << endl;
	cout << "4 - trojkat" << endl;
	cin >> a;

	if (a == 1)
	{
		cout << "POdaj dlugosc boku kwadratu" << endl;
		cin >> bokkw;
		pole = bokkw * bokkw;
		cout << "pole wynosi: " << pole << endl;
	}
	else if (a == 2)
	{
		cout << "POdaj dlugosc 1 boku trapeza" << endl;
		cin >> boktr1;
		cout << "POdaj dlugosc 2 boku trapeza" << endl;
		cin >> boktr2;
		cout << "podaj wysokosc trapeza" << endl;
		cin >> wysokosc;
		pole = ((boktr1 + boktr2) * wysokosc) / 2;
		cout << "pole trapeza wynosi: " << pole << endl;
	}
	else if (a == 3)
	{
		cout << "POdaj dlugosc boku romba" << endl;
		cin >> bokro;
		cout << "POdaj wysokosc boku romba" << endl;
		cin >> wysokosc;
		pole = bokro * wysokosc;
		cout << "Pole rombu wynosi: " << pole << endl;
	}
}
