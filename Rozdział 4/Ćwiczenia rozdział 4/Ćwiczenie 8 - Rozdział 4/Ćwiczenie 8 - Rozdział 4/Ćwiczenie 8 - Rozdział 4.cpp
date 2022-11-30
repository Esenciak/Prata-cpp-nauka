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

    cout << "Prosze podac srednice pizzy: ";
    pizza* pizz = new pizza;
    cin >> pizz->srednica;
    cin.get();
    cout << "Prosze podac nazwe firmy produkujaca pizze: ";
    getline(cin, pizz->name);
    cout << "Prosze podac wage pizzy: ";
    cin >> pizz->waga;
    cout << "\nOto wprowadzone dane: \n\n";
    cout << "Srednica pizzy: " << pizz->srednica << endl;
    cout << "Nazwa firmy: " << pizz->name << endl;
    cout << "Waga pizzy: " << pizz->waga;
    delete pizz;
    
    return 0;
}
