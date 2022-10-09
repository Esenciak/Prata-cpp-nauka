// 7 Program Bondini.cpp - uzycie znakow specjalnych
#include <iostream>

int main()
{
	using namespace std;
	cout << "\aOperacja \"HyperHype\" zostala uruchomiona!\n";
	cout << "Podaj swoj kod agenta: ___________\b\b\b\b\b\b\b\b\b\b\b";
	long code;
	cin >> code;
	cout << "\aPodales " << code << "...\n";
	cout << "\aKod poprawny! Prosze realizowac plan Z3!\n";
	return 0;
}

