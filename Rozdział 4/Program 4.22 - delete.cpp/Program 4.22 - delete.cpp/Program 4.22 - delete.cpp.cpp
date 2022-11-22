// Program 4.22 - delete.cpp.cpp : uzycie operatora delete

#include <iostream>
#include <cstring>
#pragma warning(disable : 4996)

using namespace std;
char* getname(void);    //protoryp funkcji

int main()
{
	char* name;				//utworzenie wskaznika bez przypisanej pamieci

	name = getname();		//przypisanie zmiennej adresu lancucha
	cout << name << " pod adresem " << (int*)name << "\n";
	delete[] name;
}

char* getname()			//zwraca wskaznik na nowy lancuch
{
	char temp[80];		//tymczasowy bufor
	cout << "Podaj nazwisko: ";
	cin >> temp;
	char* pn = new char[strlen(temp) + 1];
	strcpy(pn, temp);	//kopiowanie lanucha do krotszej tablicy

	return pn;			//po zakonczeniu temp zostanie utracone
}