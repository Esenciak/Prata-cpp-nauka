// Program 4.5 - instr3.cpp : Wczytywanie weicej niz jednego slowa za pomoca get()

#include <iostream>

int main()
{
    using namespace std;
    const int ArSize = 20;
    char name[ArSize];
    char dessert[ArSize];

    cout << "Podaj swoje imie:\n";
    cin.get(name, ArSize).get();        //wczytanie wiersza i znaku nowego wiersza
    cout << "Podaj swoj ulubiony deser:\n";
    cin.get(dessert, ArSize).get();
    cout << "Mam dla ciebie " << dessert;
    cout << ", " << name << ".\n";
    return 0;

}

