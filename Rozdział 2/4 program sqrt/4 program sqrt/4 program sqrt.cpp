// sqrt.cpp - uzycie funckji sqrt()
#include <iostream>
#include <cmath>		//lub math.h

int main()
{
	using namespace std;

	double area;
	cout << "Podaj powierzchnie swojego mieszkania w metrach kwadratowych: ";
	cin >> area;
	double side;
	side = sqrt(area);
	cout << "Odpowiada to kwadratowi o boki " << side
	  	<< " metrow." << endl;
	cout << "Niesamowite!" << endl;
	return 0;
}