#include <iostream>

#include "d_cal.h"							// Use Calendar Class
#include "d_random.h"						// Use Random Class

using namespace std;

int main()
{

	int year1, year2;						// Define Random Months

	randomNumber rand;

	year1 = (rand.random(25) * 4 + 1900);	// Set the Year One
	year2 = (rand.random(25) * 4 + 1900);	// Set the Year Two

	int i;

	for (i=1;i<13;i++)
	{
	
		calendar yearOne = calendar(i,year1);
		yearOne.displayCalendar();				// Display Calendar For Year One
		cout << endl;
	
	}
	
	for (i=1;i<13;i++)
	{
	
		calendar yearTwo = calendar(i,year2);
		yearTwo.displayCalendar();				// Display Calendar For Year Two
		cout << endl;

	}

	return 0;

}