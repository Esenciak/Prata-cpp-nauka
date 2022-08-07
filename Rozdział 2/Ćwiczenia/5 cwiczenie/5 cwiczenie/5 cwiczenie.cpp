// 5 cwiczenie.cpp - zamiana la swietlnych na jednoski astronomiczne
#include<iostream>

using namespace std;

double astro(double sts);

int main()
{
	double lata;
	cout << "Podaj liczbę lat swietlnych: ";
	cin >> lata;
	cout << endl;
	cout << lata << " lat swietlnych = ";
	cout << astro(lata);
	cout << " jednostek astronomicznych.";
	return 0;
}

double astro(double jed)
{
	
	return jed * 63240;
}