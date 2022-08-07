// 2 Cwiczenie.cpp - 2 cwiczenie z rozdziału 2

#include<iostream>

int odlmila(int);					// prototyp funkcji
int main()
{
	using namespace std;
	int mila;																//zapisuje wartość mila
	cout << "Podaj odleglosc w milach morskich: " << endl;					//wyswietlenie zapytania
	cin >> mila;															//podaje wartosc mila
	int metry = odlmila(mila);												//zapisuje wartosc metry rowne odleglosc mili( w milach)
	cout << mila << " mil morskich = ";										//wyswietla ilosc podanych mil 
	cout << metry << " metrow." << endl;									//wyswietla przeliczona ilosc mil na metry
	return 0;																//konczy main()
}

int odlmila(int m)															//wlasna funkcja odlegosci mili zawiera w srodku dwie dane
{
	return 1852 * m;														//program zwraca 1852 razy mile czyli (1852 * metry)
}