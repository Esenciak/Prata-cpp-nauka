// 2 program exceed.cpp - przekroczenie ograniczeń typów całkowitych
#include <iostream>
#define ZERO 0              // niech ZERO oznacza wartosc 0
#include <climits>          // definicja największej wartości int jako INT_MAX

int main()
{
    using namespace std;

    short sam = SHRT_MAX;       //inicjalizowanie zmiennej wartością maks
    unsigned short sue = sam;   // mamy już zmienną, więc jest OK

    cout << "Sam ma " << sam << " dolarow, a Sue ma " << sue;
    cout << " dolatow." << endl
         << "Do obu kont dodaj 1$. " << endl << "Teraz ";
    sam = sam + 1;
    sue = sue + 1;
    cout << "Sam ma " << sam << " dolarow, a Sue ma " << sue;
    cout << " dolarow.\nBiedny Sam!" << endl;
    sam = ZERO;
    sue = ZERO;
    cout << "Sam ma " << sam << " dolarow, a Sue ma " << sue;
    cout << " dolarow." << endl;
    cout << "Zabierzmy z obu kont 1$." << endl << "Teraz ";
    sam = sam - 1;
    sue = sue - 1;
    cout << "Sam ma " << sam << " dolarow, a Sue ma " << sue;
    cout << " dolarow." << endl << "Szczesciara Sue!" << endl;
    return 0;
}
