// 10 Program arith.cpp - arytmetyka C++
#include <iostream>

int main()
{
    using namespace std;
    float hats, heads;

    cout.setf(ios_base::fixed, ios_base::floatfield);       //fixed-point
    cout << "Podaj liczbe: ------" << "\b\b\b\b\b\b";
    cin >> hats;
    cout << "Podaj druga liczbe: ------" << "\b\b\b\b\b\b";
    cin >> heads;

    cout << "hats = " << hats << " heads = " << heads << endl;
    cout << "hats + heads = " << hats + heads << endl;
    cout << "hats - heads = " << hats - heads << endl;
    cout << "hats * heads = " << hats * heads << endl;
    cout << "hats / heads = " << hats / heads << endl;
    return 0;
}

