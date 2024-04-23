#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	ifstream plik("C:\plik.txt");

	if (plik)
	{
		string linia;
		while (getline(plik, linia))
		{
			cout << linia << endl;
		}
	}
	else
	{
		cout << "BLAD: nie mozna otworzyc pliku." << endl;
	}

	return 0;
}