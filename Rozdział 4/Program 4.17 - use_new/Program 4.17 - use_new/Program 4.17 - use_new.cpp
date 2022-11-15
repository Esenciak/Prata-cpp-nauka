// Program 4.17 - use_new.cpp : uzycie operatora new

#include <iostream>

int main()
{
    using namespace std;
    int* pt = new int;          //alokacja pamięci na wartość int
    *pt = 1001;                 //zapis tam wartosci

    cout << "int: ";
    cout << "wartosc = " << *pt << ": polozenie = " << pt << endl;

    double* pd = new double;     //alokacja pamieci na wartosc double
    *pd = 10000001.0;            //zapis tam wartosci

    cout << "double: ";
    cout << "Wartosc = " << *pd << ": polozenie = " << pd << endl;
    cout << "wielkosc pt = " << sizeof(pt);
    cout << ": wielkosc *pt = " << sizeof(*pt) << endl;
    cout << "wielkosc pd = " << sizeof(pd);
    cout << ": wielkosc *pd = " << sizeof(*pd) << endl;
    return 0;
}


