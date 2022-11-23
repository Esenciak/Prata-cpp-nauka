// Ćwiczenie 1 - Rozdział 4.cpp : Program proszący o informacje

#include <iostream>
#include<string>

int main()
{
    using namespace std;
    cout << "Jak masz na imie? ";
    string name;
    getline(cin, name);
    cout << "\nJak masz na nazwisko? ";
    string lastname;
    getline(cin, lastname);
    cout << "\nNa jaka ocene zaslugujesz? ";
    int grade;
    cin >> grade;;
    cout << "\nile masz lat? ";
    int age;
    cin >> age;

    cout << "\nNazwisko: " << lastname << ", " << name;
    cout << "\nOcena: " << --grade;
    cout << "\nWiek: " << age;
}

