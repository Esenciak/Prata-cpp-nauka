// 1 cwiczenie.cpp - Program konwertujacy cm an stopy i cale ( 1 cal to 25.4 mm)

#include <iostream>


int main()
{
	using namespace std;

	const long przeli = 25.4;

	int centy;
	cout << "Podaj cm: ____\b\b\b\b";
	cin >> centy;
	int stopy;
	stopy = centy / przeli;
	cout << "\n" << centy << " centymetrow to " << stopy << " stop";
	int cale;
	cale = centy % przeli;
	cout << " _ " << cale << endl;
	return 0;
}