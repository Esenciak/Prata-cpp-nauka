// 5 program def własnej funkcji - definiujemy własnąfunkcje

#include<iostream>

void simon(int);		//prototyp funkcji simon()

int main()
{
	using namespace std;
	simon(3);			// wywołanie funkcji simon()
	cout << "Podaj liczbe calkowita: ";
	int count;
	cin >> count;
	simon(count);		//wywołuje ponownie
	cout << "Gotowe!" << endl;
	return 0;
}
void simon(int n)		//definicja funkcji simon
{
	using namespace std;
	cout << "Simon prosi, abys dotknal palcow u stop " << n << " razy." << endl;
}						//funkcja typu void nie ma instrukcji return