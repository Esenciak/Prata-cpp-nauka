// 7 dodatkowe.cpp - ludnosc swiata
//Zadanie 5: Napisz program, który poprosi użytkownika o wpisanie bieżącej liczebności populacji świata i bieżącej liczebności 
//populacji Polski(albo innego wybranego kraju) i zapisze otrzymane dane w zmiennych typu long long.
//Potem program powinien obliczyć i wypisać procent, jaki populacja Polski stanowi w populacji świata.
//Przebieg wykonania programu powinien wyglądać mniej więcej tak :

//Podaj liczbę ludności świata : 6898758899
//Podaj liczbę ludności Polski : 38482919
//Populacja Polski stanowi 0, 55782 % populacji świata.

#include <iostream>

int main()
{
    using namespace std;
    cout << "Podaj liczbe ludnosci swiata : ";
    long long ludnosc;
    cin >> ludnosc;
    cout << "\nPodaj liczbe ludnosci Polski : ";
    long long polska;
    cin >> polska;
    cout << "\nPopulacja polski stanowi " << polska * 100.00 / ludnosc << " % populacji swiata.";

}
