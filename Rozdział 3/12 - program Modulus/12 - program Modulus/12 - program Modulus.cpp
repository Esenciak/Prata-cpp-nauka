// 12 - program Modulus.cpp - uzywa operatora % do zamiany funtow na kamienie
#include <iostream>

int main()
{
    using namespace std;
    const int Lbs_per_stn = 14;
    int lbs;

    cout << "Podaj swoja wage w funtach ";
    cin >> lbs;
    int stone = lbs / Lbs_per_stn;      // caly kamieni
    int pounds = lbs % Lbs_per_stn;     // reszta w funtach
    cout << lbs << " funtow to " << stone
         << " kamieni, " << pounds << " funt(ow) .\n";
    return 0;
}
