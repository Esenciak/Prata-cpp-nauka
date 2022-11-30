// Ćwiczenie 5 - Rozdział 4.cpp : struktura batonik

#include <iostream>

int main()
{
    using namespace std;

    struct baton 
    {
        string marka;
        double waga;
        int kalorie;
    };

    baton snack = { "Mocha Munch", 2.3, 350};

    cout << "Nazwa marki: " << snack.marka << endl;
    cout << "Waga batona: " << snack.waga << endl;
    cout << "Kalorycznosc batona: " << snack.kalorie << endl;

    return 0;

}
