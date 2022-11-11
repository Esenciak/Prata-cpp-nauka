// Program 4.1 - arrayone.cpp : małe tablice liczb całkowitych

#include <iostream>

int main()
{
    using namespace std;
    int yams[3];                        // tworze trojelementową tablice
    yams[0] = 7;                        // przypisuje wartosc pierwszemu elementowi
    yams[1] = 8;
    yams[2] = 6;

    int yamcosts[3] = { 20, 30, 5 };    // tworzenie + inicjalizacja tablic
    cout << "Razem ingramow = ";
    cout << yams[0] + yams[1] + yams[2] << endl;
    cout << "Paczka zawierajaca " << yams[1] << " ingramow kosztuje po ";
    cout << yamcosts[1] << " groszy za bulwe.\n";
    int total = yams[0] * yamcosts[0] + yams[1] * yamcosts[1];
    total = total + yams[2] * yamcosts[2];
    cout << "Laczny koszt ingramu to " << total << " groszy.\n";

    cout << "\nRozmiar tablicy yams = " << sizeof yams;
    cout << " bajtow.\n";
    cout << "Rozmiar jednego elementu = " << sizeof yams[0];
    cout << " bajtow.\n";
    return 0;

}

