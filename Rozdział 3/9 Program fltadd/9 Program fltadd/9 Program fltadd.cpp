// 9 Program fltadd.cpp - problemy z dokladnoscia liczb float
#include <iostream>

int main()
{
    using namespace std;
    float a = 2.34E+22f;
    float b = a + 1.0f;

    cout << "a = " << a << endl;
    cout << "b - a = " << b - a << endl;

    return 0;
}


// Float ma dokładność do 6/7 cyfr a nasze floaty mają ok 23 cyfry po przecinku dlatego dodatnie 1 i odjecie pierwotnej liczby nie daje 1 a 0