// Ćwiczenie 2 - Rozdział 4 : Przepisz listening 4.4 ale z string

#include <iostream>
#include <string>

int main()
{
    using namespace std;
    cout << "Podaj swoje imie: ";
    string name;
    getline(cin, name);
    cout << "\nPodaj swoj ulubiony deser: ";
    string desser;
    getline(cin, desser);
    cout << "\nMam dla ciebie " << desser << ", " << name;
    
    
    return 0;
}

