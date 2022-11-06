// 3 ćwiczenie.cpp - długości geograficzne
//

#include <iostream>

int main()
{
    using namespace std;
    
    const int sekundynaminuty = 60;
    const int minutynastopnie = 60;
    
    cout << "\nPodaj dlugosc w stopniach, minutach i sekundach:" << endl;
    cout << "Najpierw podaj stopnie: ";
    int stopnie;
    cin >> stopnie;
    cout << "\nNastepnie podaj minuty stopnia luku: ";
    int minuty;
    cin >> minuty;
    cout << "\nNa koniec podaj sekundy luku: ";
    int sekundy;
    cin >> sekundy;
    double obliczenia = ((double)sekundy / sekundynaminuty ) / minutynastopnie + stopnie;
    cout << "\n" << stopnie << " stopnia, " << minuty << " minut, " << sekundy << " sekund = " << obliczenia << " stopni.";

}

