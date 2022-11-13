// Program 4.13 - arrstruck.cpp : tablica struktur

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
    inflatable guest[2] =                           //inicjalizacja tablicy struktury
    {
        {"Bambi", 0.5, 21.99},          //pierwsza struktura z tablicy
        {"Godzilla", 2000, 565.99}      //nastepna struktura z tablicy
    };

    cout << "Goscie tacy jak " << guest[0].name << " i " << guest[1].name
        << "\nrazem maja "
        << guest[0].volume + guest[1].volume << " stop szesciennych.\n";
    return 0;
}

