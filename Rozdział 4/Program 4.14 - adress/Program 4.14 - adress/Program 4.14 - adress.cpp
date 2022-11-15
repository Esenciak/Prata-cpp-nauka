// Program 4.14 - adress.cpp : uzycie operatora & do okreslenia adresu

#include <iostream>

int main()
{
	using namespace std;
	int donuts = 6;
	double cups = 4.5;

	cout << "Wartosci zmiennej donuts = " << donuts;
	cout << ", a adres tej zmiennej = " << &donuts << endl;

	cout << "Wartosc zmiennej cups = " << cups;
	cout << ", a adres tej zmiennej = " << &cups << endl;
	return 0;
}
