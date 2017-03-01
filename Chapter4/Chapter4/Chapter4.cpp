#include <iostream>
#include <vector>


using namespace std;


int main()
{

	double zero = 0.0;						// Declare Zero
	double max = -1.0/zero;					// Declare Max At Infinity
	vector<double> dblVector;				// Declare Empty Vector
	double v = 1;							// Declare Vector Input Variable


	cout << "Enter numbers to add to the vector. Enter 0 when finished." << endl << endl;
	
	while(v != 0)							// Ask For Numbers, Add To Vector
	{
		cout << "Enter number: ";
		cin >> v;
		dblVector.push_back(v);
	}

	int j = dblVector.size();				// Declare Vector Size
	double n = 0;							// Declare Value Variable
	double a = 0;							// Declare Average Variable
	double m = 0;							// Declare Maximum Variable

	cout << endl << "You entered: ";		// Output Responses
	for(int i=0;i<j;i++)
	{
		n = dblVector[i];
		cout << n << ", ";					// Output Value To Screen
		a = a + n;							// Add Value To Average Calculation
		
		if(n>m)								// Determine If Larger Value Than Current Maximum
			m = n;
	}

	a = a / j;								// Calculate Average

	cout << endl << endl << "The average input value is: " << a;	// Output Average

	cout << endl << endl << "The maximum input value is: " << m;	// Output Maximum

	cout << endl << endl;					// Display Blank Lines

}