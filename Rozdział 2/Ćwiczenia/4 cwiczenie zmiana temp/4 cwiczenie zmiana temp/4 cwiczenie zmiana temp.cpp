// 4 cwiczenie.cpp - zmiana temperatur z celsjusza na fagrenheita
#include<iostream>
using namespace std;

int StopnieC(int sts);

int main()
{
	cout << "Podaj temperature w stopniach Celcjusza: ";
	int Celcjusz;
	cin >> Celcjusz;
	cout << endl;
	int Faren = StopnieC(Celcjusz);
	cout << Celcjusz << " Stopnie Celcjusza to " << StopnieC(Celcjusz) << " Stopnie Ferena.";
	cout << endl;
	return 0;
}

int StopnieC(int sts)
{
	
	

	return (1.8 * sts) + 32;

}