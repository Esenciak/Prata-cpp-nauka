// 6 ćwiczenie.cpp - zmiana z litr an galon
#include <iostream>

int main()
{
    using namespace std;
    
    cout << "Podaj spalanie benzyny na 100 km: ";
    double spalanie;
    cin >> spalanie;                                    // spalanie na 100
   
    cout << "\nZuzycie benzyny w milach na galon wynosi " << 62.14 / (spalanie / 3.785) << "/100";

}
