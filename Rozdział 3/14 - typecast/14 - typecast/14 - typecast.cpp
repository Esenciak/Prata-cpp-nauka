// 14 - typecast.cpp - wymuszanie zmian typu

#include <iostream>

int main()
{
    using namespace std;
    int auks, bats, coots, rabbit;
    
    // ponizsza instrukacja dodaje wartosc jako typ double,
    // nastepnie konwertuje wynik na int
    auks = 19.99 + 11.99;

    // te instrukcje dodaja wartosc jako typ int
    bats = (int)19.99 + (int)11.99;         // stara skladnia C
    coots = int(19.99) + int(11.99);        // nowa skladnia C++
    cout << "auks = " << auks << ", bats = " << bats;
    cout << ", coots = " << coots << endl;
   

    char ch = 'Z';
    cout << "Kod odpowiadajacy znakowi " << ch << " to ";
                                            // pokaz jako char
    cout << int(ch) << endl;                // pokaz jako int
    return 0;
}

