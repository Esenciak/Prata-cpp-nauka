// 1 program limits.cpp - wybrane ograniczenia liczb całkowitych

#include<iostream>
#include<climits>							// w starszych systemach użyć limits.h

int main()
{
	using namespace std;
	int n_int = INT_MAX;					// inicjalizacja n_int maks.liczbą int
	short n_short = SHRT_MAX;				// symbole zdefiniowano w pliku limits.h
	long n_long = LONG_MAX;

	//operator sizeof zwraca wielkosc typu lib zmiennej
	cout << "int ma " << sizeof(int) << " bajtow." << endl;
	cout << "short ma " << sizeof n_short << " bajtow." << endl;
	cout << "long ma " << sizeof n_long << " bajtow." << endl;

	cout << "Wartosci maksymalne: " << endl;
	cout << "int: " << n_int << endl;
	cout << "short: " << n_short << endl;
	cout << "long: " << n_long << endl << endl;

	cout << "Minimalna wartosc typu int = " << INT_MIN << endl;
	cout << "Bitów na bajt = " << CHAR_BIT << endl;
	cout << "1 commit\n" << "2 commit\n" << "33";
	return 0;
}
