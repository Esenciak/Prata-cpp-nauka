// Ćwiczenie 4 - Rozdział 4.cpp : ćwiczeni 3 ale string

#include <iostream>
#include <cstring>

int main()
{
    using namespace std;

    string imie;
    cout << "Podaj imie: ";
    cin >> imie;
    string nazwisko;
    cout << "\nPodaj nazwisko: ";
    cin >> nazwisko;
    nazwisko += ", " + imie;
    cout << "Oto informacje nestawione w jeden napis: " << nazwisko;
    return 0;
}

