// Program 4.10 - strtype4.cpp : Wprowadzenie danych wierszami

#include <iostream>
#include <string>               //udostepnienie klasu string
#include <cstring>              // biblioteka łancuchów w stylu C

int main()
{
    using namespace std;
    char charr[20];
    string str;

    cout << "Dlugosc lanucha w zmiennej charr przed wprowadzeniem danych: "
        << strlen(charr) << endl;
    cout << "Dlugosc lancucha w zmiennej str przed wprowadzeniem danych: "
        << str.size() << endl;
    cout << "Wprowadzenie wiersza tekstu:\n";
    cin.getline(charr,20);                  // okreslenie maksymalnej dlugosci
    cout << "Wprowadzono: " << charr << endl;
    cout << "Podaj kolejny wiersz tekstu:\n";
    getline(cin, str);                  //cin jest parametrem, nie podano dlugosci
    cout << "Wprowadzono: " << str << endl;
    cout << "Dlugosc lancucha w miennej charr po wprowadzeniu danych: "
        << strlen(charr) << endl;
    cout << "Dlugosc lanucha w zmiennej str po wprowadzeniu danych: "
        << str.size() << endl;

    return 0;

}

