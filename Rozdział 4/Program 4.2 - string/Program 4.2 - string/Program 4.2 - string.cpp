// Program 4.2 - string.cpp : zapis lancuchow w tablicy
#include <iostream>
#include <cstring>         // zawiera deklaracje funckji strlen()

int main()
{
    using namespace std;
    const int Size = 15;
    char name1[Size];                                       // pusta tablica
    char name2[Size] = "C++owboy";                          // tablica zainicjalizowana

    cout << "Jak sie masz! Jestem " << name2;
    cout << "! A jak ty sie nazywasz?\n";
    cin >> name1;
    cout << "No tak, " << name1 << ", twoje imie ma ";
    cout << strlen(name1) << " liter i jest zapisane\n";
    cout << "w tablicy majacej " << sizeof(name1) << " bajtow.\n";
    cout << "Twoj inicjal to " << name1[0] << ".\n";
    name2[3] = '\0';                                        //znak NULL
    cout << "Pierwsze trzy litery mojego imienia to: ";
    cout << name2 << endl;
    return 0;
}

