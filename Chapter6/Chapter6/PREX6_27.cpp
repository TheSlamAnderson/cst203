#include <iostream>
#include <string>
#include <list>

using namespace std;

template <typename T>
typename T maxLoc(list<T>& aList)
{
	list<T>::iterator maxIter = aList.begin();

	T maxValue = *maxIter;

	while (maxIter != aList.end())
	{
		if(maxValue<*maxIter)
		{
			maxValue = *maxIter;
		}
		maxIter++;
		
	}

	aList.remove(maxValue);

	return maxValue;
}


int main()
{

	string strArr[] = {"insert", "erase","template", "list"};
	int strSize = sizeof(strArr)/sizeof(string);
	list<string> strList(strArr, strArr+strSize);

	cout << "There are " << strSize << " items in the list." << endl << endl;

	for (int i=0; i<strSize; i++)
	{
		string maxString = maxLoc(strList);
		cout << "For pass #" << i+1 << " the largest value is: " << maxString << endl << endl;
	}
	
	cout << "The list is now empty." << endl << endl;

}