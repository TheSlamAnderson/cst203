#include <iostream>
#include <iomanip>
#include <string>

#include "Address.h"
#include "Employee.h"
#include "Name.h"

using namespace std;

int main()
{

	NAME n;
	ADDRESS A;
	EMPLOYEE e;

	cout << "Name :" << endl << endl;
	n.prtName();
	cout << endl << endl;

	cout << "Address: " << endl << endl;
	A.prtAddress();
	cout << " (Address)";
	cout << endl << endl;

	cout << "Employee: " << endl << endl;
	e.prtEmployee();
	cout << endl << endl;

}