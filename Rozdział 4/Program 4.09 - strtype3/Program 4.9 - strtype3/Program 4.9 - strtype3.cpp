// Program 4.9 - strtype3.cpp : Klasy string ciag dalszy

#include <iostream>
#include <string>                   //Udostępnianie klasy string
#include <cstring>                  //Bliblioteke obsługi łańcuchów z C

int main()
{
    using namespace std;
    char charr1[20];
    char charr2[20] = "jaguar";
    string str1;
    string str2 = "pantera";

    //przypisywanie obiektopw string i tablic znakowych
    str1 = str2;                    // kopiuje str2 do str1
    strcpy_s(charr1, charr2);         // kopiuje charr2 do charr1
        
    //łaczy napis z tablica nakową
    str1 += " makaron";             //dopisywanie makaronu do str1
    strcpy_s( charr1, " sok");         //dopisanie soku do charr1

    //okreslenei dlugosci łancucha
    int len1 = str1.size();         //okresl dlugosc str1
    int len2 = strlen(charr1);      //okresl dlugosc charr1

    cout << "Lancuch " << str1 << " ma "
        << len1 << " znakow.\n";
    cout << "Lancuch " << charr1 << " ma "
        << len2 << " znakow.\n";
    return 0;
}

