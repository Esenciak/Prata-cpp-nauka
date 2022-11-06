// 5 ćwiczenie.cpp - przeliczenie benzyny

#include <iostream>

int main()
{
    using namespace std;

    cout << "Ile kilometrow przejechales: ";
    double km;
    cin >> km;
    cout << "\nIle litrow paliwa spaliles: ";
    int paliwo;
    cin >> paliwo;
    cout << "\nZuzycie samochodu wynosi: " << paliwo/km * 100;
}
