// Ćwiczeni 3 - Rozdział 4.cpp : 

#include <iostream>
#include <cstring>

int main()
{
    using namespace std;
    const int Dane = 20;
    char name[Dane];
    char lastname[Dane];

    cout << "Podaj swoje imie: ";
    cin.getline(name,Dane);
    cout << "\nPodaj swoje nazwisko: ";
    cin.getline(lastname, Dane);
    cout << "\n" << lastname << ", " << name;

}