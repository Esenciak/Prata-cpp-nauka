// Program 4.6 - numstr.cpp : wczytywanie weirsza danych po liczbie

#include <iostream>

int main()
{
    using namespace std;
    cout << "W ktorym roku zbudowano twoj dom?\n";
    int year;
    cin >> year;
    cout << "Przy jakiej ulicy mieszkasz?\n";
    char addres[80];
    cin.getline(addres, 80);
    cout << "Rok budowy: " << year << endl;
    cout << "Addres: " << addres << endl;
    cout << "\nGotowe!\a";
    return 0;
}

