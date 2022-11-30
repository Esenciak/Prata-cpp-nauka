// Ćwiczenie 6 - Rozdział 4.cpp : Batoniki c.d

#include <iostream>

int main()
{
    using namespace std;

    struct bars
    {
        string name;
        double weight;
        int cal;
    };

    bars snacks[3]
    {
        {"Snickers", 21.37, 322},
        {"Twix", 91.51, 420},
        {"Bounty", 5.95, 1337}

    };

    for (int i = 0; i < 3; i++) {
        cout << "Batonik #" << i + 1 << ":\n\n";
        cout << "Nazwa batonika: " << snacks[i].name << endl;
        cout << "Waga batonika: " << snacks[i].weight << endl;
        cout << "Liczba kalorii batonika: " << snacks[i].cal << endl << endl;
    }

}