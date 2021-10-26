#include <iostream>
using namespace std;

int main()
{
	int number, firstDigits, temp, secDigits, thirdDigits,sum;
	
	cout << "Enter a number between 0 and 1000: ";
	cin >> number ;
	
	firstDigits = number%10;
	temp = number/10;
	secDigits= temp%10;
	temp = temp/10;
	thirdDigits = temp%10;
	
	sum = firstDigits + secDigits + thirdDigits;
	
	cout << "The sum of the digits is " << sum <<endl; 
	
	return 0;
}
