//convert - zmiana kamieni na funty

#include<iostream>
int wagakamienii(int);				//prototyp funkcji
int main()
{
	using namespace std;
	int stone;
	cout << "Podaj wage w kamienaich: ";
	cin >> stone;
	int funty = wagakamienii(stone);
	cout << stone << " kamieni = ";
	cout << funty << " funtow." << endl;
	return 0;
}

int wagakamienii(int sts)
{
	return 14 * sts;
}