/**
*@ Siti Munizaiyanah binti Bahaman
*@ Matric No: 2116492
*@ Lab #1 Section 4
*/

#include <iostream>
using namespace std;

int main()
{
	double celcius,fahreinheit;
	cout << "Enter a degree in Celcius: ";
	cin >> celcius;
	
	fahreinheit = (9.0/5)*celcius +32;
	
	cout << celcius << " Celcius is " << fahreinheit << " Fahreinheit";
	
	return 0;
}

