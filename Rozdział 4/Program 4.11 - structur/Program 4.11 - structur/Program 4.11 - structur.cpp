// Program 4.11 - structur.cpp : prosty przykład użycia sktruktur

#include <iostream>

struct inflatable       //deklaracja struktury
{
    char name[20];
    float volume;
    double price;
};

int main()
{
    using namespace std;
    inflatable guest =
    {
        "Glorious Gloria",      //wartość pola name
        1.88,                   //wartosc pola volume
        29.99                   //wartosc pola price
    };  //guest to zmienna strukturalna typu inflatable
        //Zmienną tę inicjalizujemy wartościami jak powyżej

    inflatable pal =
    {
        "Audacious Arthur",
        3.12,
        32.99
    };  //pal to druga zmienna typu inflatable
    //UWAGA: w niektórych inplementacjach C++ obowiązuje zapis
    //static infatalbe gues =

    cout << "Wpisz na swoja liste gosci jeszcze: " << guest.name;
    cout << " oraz " << pal.name << "!\n";
    //pan.name to pole name zmiennej pal
    cout << "Mozesz miec ich oboje za ";
    cout << guest.price + pal.price << "zl!\n";
    cout << "Ich objetosc to: ";
    cout << guest.volume + pal.volume << "dm3!\n";
    return 0;
}

