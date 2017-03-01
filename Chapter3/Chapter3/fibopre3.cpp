#include <iostream>
#include "fibonacci.h"	

using namespace std;

int main()
{

	long k = 0;
	cout << "Enter a number: ";
	cin >> k;

	if (k < 0 || k > 40)
		cout << "Number must be between 0 and 40." << endl;
	else
		cout << "The Fibonacci number of " << k << " is " << fib(k) << "." << endl;
  
	cin.get();
    
	return 0;

}