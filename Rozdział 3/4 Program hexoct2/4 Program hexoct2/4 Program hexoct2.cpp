// 4 Program hexoct2.cpp - pokazuje liczby szestnastkowo i osemkowo
#include <iostream>

int main()
{
    using namespace std;
    int chest = 42;
    int waist = 42;
    int inseam = 42;
    
    cout << "Co za figura!" << endl;
    cout << "obwod piesi = " << chest << " (dziesietnie) " << endl;
    cout << hex;                        // manipulator zmieniajacy system liczbowy
    cout << "talia = " << waist << " szestnastkowo" << endl;
    cout << oct;                        // manipulator zmieniajacy system liczbowy
    cout << "dlugosc nogawki = " << inseam << " (osemkowo) " << endl;
    return 0;
}
