// Ćwiczenie 7 - Rozdział 4.cpp : Pizza time!!
#include <iostream>
#include <string>

int main()
{
    using namespace std;

    struct pizza
    {
        string name;
        double srednica;
        double waga;
    };

    cout << "Prosze pdoac nazwe firmy produkujaca pizze: \n";
    pizza ulupizza;
    getline(cin, ulupizza.name);
    cout << "Prosze podac srednice pizzy: \n";
    cin >> ulupizza.srednica;
    cout << "Prosze podac wage pizzy: \n";
    cin >> ulupizza.waga;
    cout << "Oto wprowadzone dane\n\n";
    cout << "Nazwa firmy: " << ulupizza.name << endl;
    cout << "Srednica pizzy: " << ulupizza.srednica << endl;
    cout << "Waga pizzy: " << ulupizza.waga << endl;
    return 0;
}
