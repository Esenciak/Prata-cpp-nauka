// Program 4.12 - assgn_st.cpp : przypisywanie struktur

#include <iostream>

struct inflatable
{
    char name[20];
    float volume;
    double price;
};

int main()
{
    using namespace std;

    inflatable bouguet =
    {
        "Slonecznik",
        0.20,
        12.49
    };

    inflatable choice;
    cout << "zmienna bouguet: " << bouguet.name << " za ";
    cout << bouguet.price << " zl\n";

    choice = bouguet;           //przypisanie jednej struktury do drugiej  
    cout << "zmienna choice: " << choice.name << " za ";
    cout << choice.price << " zl\n";
    return 0;
}


