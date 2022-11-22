// Program 4.21 - newstrct.cpp : Operator new i struktury

#include <iostream>

struct inflatable
{
    char name[20];
    float volume;
    double price;
};

int main()
{
    using namespace std;
    inflatable* ps = new inflatable;    //alokacja pamieci na strukture
    cout << "Podaj nazwe dmuchanej zabawki: ";
    cin.get(ps->name, 20);              //metoda 1.dostepu do pol
    cout << "\nPodaj objetosc w stopach szesciennych: ";
    cin >> (*ps).volume;                //metoda 2.dostepu do pol
    cout << "\nPodaj cene (zl): ";
    cin >> ps->price;
    cout << "\nNazwa: " << (*ps).name << endl;  //metoda 2.
    cout << "\nObjetosc: " << ps->volume << " stop szesciennych\n"; 
                                                //metoda 1.
    cout << "Cena: " << ps->price << "zl" << endl;
                                                //metoda 1.
    delete ps;
    return 0;

}

