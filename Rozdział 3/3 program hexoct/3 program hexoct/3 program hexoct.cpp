// 3 program hexoct.cpp - pokazuje uzycie stałych ósemkowych i szestnastkowych
#include <iostream>
using namespace std;

int main()
{
    using namespace std;
    int chest = 42;         //dziesiętna stała całkowitoliczbowa
    int waist = 0x42;       //szestnastkowa stała całkowitoliczbowa
    int inseam = 042;       //ósemkowa stałą całkowitoliczbowa

    cout << "Co za figura!\n";
    cout << "obwod piersi = " << chest << "\n";
    cout << "talia = " << waist << "\n";
    cout << "dlugosc nogawki = " << inseam << "\n";
    //znowu to samo 2
    return 0;
}
