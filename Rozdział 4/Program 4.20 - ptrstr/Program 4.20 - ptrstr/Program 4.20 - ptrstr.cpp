// Program 4.20 - ptrstr.cpp : wskaznikii lancuchy znakowe

#include <iostream>
#include <cstring>				//zadelkoarowane strlen(), strcpy()

int main()
{
	using namespace std;
	char animal[20] = "niedzwiedz";		//zmienna animal zawiera lancuch niedzwiedz
	const char* bird = "myszolow";		//stala bird zawiera adres lanucha
	char* ps;

	cout << animal << " oraz ";			//wyswietla niedzwiedzia
	cout << bird << "\n";				// wyswietla myszolowa
	//cout << ps << "\n";					//moze pokazac smieci, moze zawiesic program

	cout << "Podaj rodzaj zwierzecia: ";
	cin >> animal;						//OK, o ile < 20 znakow
	//cin >> ps; Zbyt straszne, zeby nawet probowac - ps nie wskazuje zaalokowanej pamieci

	ps = animal;						// ustawienie ps na lancuch
	cout << ps << " i!\n";				//OK, to samo co uzycie animal
	cout << "Przed uzyciem strcpy():\n";
	cout << animal << " pod adresem " << (int*)animal << endl;
	cout << ps << " pod adresem " << (int*)ps << endl;
	delete[] ps;
	return 0;
}

