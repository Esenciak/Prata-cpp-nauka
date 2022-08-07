// cokolwiek.cpp - Programy z cwiczen ale nie chce mi sięrobić nowych
// Program proszący o podanie odległości w milach morskich i zamieniajacy ja na metry ( jedna mila = 1852 metry)
#include<iostream>

int odleglosc(int);

int main()
{
	using namespace std;		

	int mila;				//tworze mile
	cout << "Podaj ilosc mil morskich: " << endl;
	cin >> mila;
	int metry=odleglosc(mila);
	cout << mila << " mil morskich to: " << metry << " metrow." << endl;
	return 0;
}

int odleglosc(int m)
{
	return 1852 * m;
}

