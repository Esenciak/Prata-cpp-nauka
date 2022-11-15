// Program 4.18 - arreynew.cpp : uzycie operatora new do tablicy

#include <iostream>

int main()
{
    using namespace std;
    double* p3 = new double[3];     // miejsce na 3 wartosci double
    p3[0] = 0.2;                    // traktujemy p3 jak nazwe tablicy
    p3[1] = 0.5;
    p3[2] = 0.8;

    cout << "p3[1] to " << p3[1] << " i p3 [0] to " << p3[0] << ".\n";

    p3 = p3 + 1;                    // zwiekszenie wskaznika
    cout << "Teraz p3[0] to " << p3[0] << " a ";
    cout << "p3[1] to " << p3[1] << ".\n";
    cout << " a p[2] to " << p3[0];

    p3 = p3 - 1;                    // znowu wskazujemy poczatek tablicy
    delete[] p3;                    // zwalniamy pamieć
    return 0;
}
