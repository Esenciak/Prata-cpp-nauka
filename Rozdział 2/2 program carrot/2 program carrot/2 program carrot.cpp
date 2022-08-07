//2 program carrot.cpp
//pokazuje użycie zmiennych

#include <iostream>

int main()
{
	using namespace std;

	int carrots;				//deklaruje zmienną typu int

	carrots = 25;				//przypisuje tej zmiannej wartość
	cout << "Mam ";
	cout << carrots;			//Pokazuje wartość zmiennej
	cout << " Marchewek.";
	cout << endl;
	carrots = carrots - 1;		//modyfikuje zmienną
	cout << "Chrum, chrum. Teraz mam " << carrots << " marchewki." << endl;
	return 0;
}