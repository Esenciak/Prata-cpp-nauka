#include <iostream>

using namespace std;

int main()
{
	int carrots;

	cout << "Ile masz marchewek?" << endl;
	cin >> carrots;													//Wczytywanie w C++
	cout << "Prosze, oto jeszcze dwie. ";
	carrots = carrots + 2;
	//W następnym wierszu sklejamy wynik
	cout << "Teraz masz " << carrots << " marchewek." << endl;
	return 0;
}