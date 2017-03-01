#include <iostream>
#include <string>
#include "d_rect.h"

using namespace std;

int main()
{

	int n;
	cout << "Enter the number of rooms in the house: ";
	cin >> n;
	cout << endl;

	double dblLength;
	double dblWidth;
	double dblArea;
	double totArea = 0;
	double maxArea = 0;
	int intMax = -1;

	rectangle *rList;
	rList = new rectangle[n];

	for(int i=0;i<n;i++)
	{
		cout << "Enter the dimension (length width) of room # " << i+1 << " : ";
		cin >> dblLength >> dblWidth;

		rList[i].setSides(dblLength,dblWidth);
		dblArea = rList[i].area();

		cout << "Length: " << dblLength << " , Width: " << dblWidth << " , Area: " << dblArea << endl << endl;

		totArea += dblArea;

		if(maxArea<dblArea)
		{
			maxArea = dblArea;
			intMax = i;
		}
	}

	cout << "The total area of the house is: " << totArea << endl << endl;

	dblLength = rList[intMax].getLength();
	dblWidth = rList[intMax].getWidth();
	dblArea = rList[intMax].area();

	cout << "The largest room is Room #" << intMax+1 << ": " << endl;
	cout << "Length: " << dblLength << " , Width: " << dblWidth << " , Area: " << dblArea << endl << endl;

	return 0;

}