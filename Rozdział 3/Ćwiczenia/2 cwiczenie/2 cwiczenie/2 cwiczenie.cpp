// 2 cwiczenie.cpp - program do liczenia BMI

#include <iostream>

int main()
{
	using namespace std;

	const int przelistopy = 12;
	const double przelimetry = 0.0254;
	const double przelikg = 2.2;

	cout << "Podaj swoj wzrost w stopach: ";
	int feets;
	cin >> feets;
	cout << "\nTeraz podaj swoj wzrost w calach: ";
	int inches;
	cin >> inches;
	cout << "\nPodaj swoja wage w funtach: ";
	int weight;
	cin >> weight;
	double wagawkilo = weight / przelikg;
	double wzrostwmetry = (feets * przelistopy + inches) * przelimetry;
	cout << "\nTwoje BMI to: " << wagawkilo / (wzrostwmetry * wzrostwmetry);



	return 0;

}

// napierw wzrost w stopach i calach, wage w funtach 
// BMI = wzrost zamienic na cale (1 stopa 12 cali) potem cale na metry (cale * 0.0254) potem wage podzielic an 2.2 
// BMI = masa w kg przez kwadrat wzrostu w metrach