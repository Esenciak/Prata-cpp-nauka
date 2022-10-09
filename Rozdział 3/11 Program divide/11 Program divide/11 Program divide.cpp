// 11 Program divide.cpp - dzielenie calkowitoliczbowe i zmiennoprzecinkowe
#include <iostream>

int main()
{
	using namespace std;
	cout.setf(ios_base::fixed, ios_base::floatfield);
	cout << "Dzielenie calkowitoliczbowe: 9/5 = " << 9 / 5 << endl;
	cout << "dzielenie zmiennoprzecinkowe: 9.0/5.0 = " << endl;
	cout << 9.0 / 5.0 << endl;
	cout << "dzielenie mieszane 9.0/5 = " << 9.0 / 5 << endl;
	cout << "Stale typu double: 1e7/9.0 = ";
	cout << 1.e7 / 9.0 << endl;
	cout << "Stale typu float: 1e7f/9.0f = ";
	cout << 1.e7f / 9.0f << endl;
	return 0;
}

