// 6 cwiczenie.cpp - godz i min w funkcji main
#include<iostream>

using namespace std;

void czas(int godziny, int minuty);

int main()
{
	cout << "Podaj liczbę godzin: ";
	int godziny;
	cin >> godziny;
	cout << endl;
	cout << "Podaj liczbe minut: ";
	int minuty;
	cin >> minuty;
	cout << endl;
	czas(godziny, minuty);
	return 0;
}

void czas(int godziny, int minuty)
{
	cout << "Czas: " << godziny << ":" << minuty << endl;
}
//siemano