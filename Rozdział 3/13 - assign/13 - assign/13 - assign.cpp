﻿// assign.cpp - konwersja typu przy przypisywaniu

#include <iostream>

int main()
{
	using namespace std;
	cout.setf(ios_base::fixed, ios_base::floatfield);
	float tree = 3;		// konwersja int na float
	int guess = 3.9832;	// konwersja float na int
	int debt = 7.2E12;	// wynik nieokreslony
	cout << "tree = " << tree << endl;
	cout << "guess = " << guess << endl;
	cout << "debt = " << debt << endl;
	return 0;
}