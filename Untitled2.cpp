#include <iostream>
using namespace std;

int main()
{
	double subtotal, gratuityRate, gratuity, total;
	
	cout << "Enter the subtotal and a gratuity rate: ";
	cin >> subtotal >> gratuityRate;
	
	gratuity = subtotal*(gratuityRate/100);
	total = gratuity + subtotal;
	
	cout << "The gratuity is $" << gratuity << " and total is $"<< total << endl;
	
	return 0;
}
