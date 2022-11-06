// 4 cwiczenie.cpp - obliczenie czasu
//

#include <iostream>

int main()
{
    using namespace std;
    
    const long sekwdniu = 86400;
    const long x = 60;

    cout << "Podaj liczbe sekund: ";
    long sekundy;
    cin >> sekundy;
 

    cout << sekundy << " sekund = " << sekundy/sekwdniu << " dni, " << sekundy%sekwdniu/3600 << " godzin, " << sekundy%sekwdniu%3600/x << " minut, " ;
    cout << sekundy % sekwdniu % 3600 % x << " sekund.";
    return 0;
}
