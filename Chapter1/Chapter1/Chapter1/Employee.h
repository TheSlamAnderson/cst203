#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

class EMPLOYEE
{

	private:
		string Name;
		string Address;
		string SSN;
			
	public:
		EMPLOYEE()
		{
			Name = "John H. Doe";
			Address = "99999 Sunset Boulevard, Beverly Hills, CA, 99999";
			SSN = "999-99-9999";
		}

		EMPLOYEE(string Nm, string Ad, string Sn)
		{
			Name = Nm;
			Address = Ad;
			SSN = Sn;
		}

	~EMPLOYEE(){;}//destructor
	string getName(){return Name;}
	string getAddress(){return Address;}
	string getSSN(){return SSN;}
	
	void prtEmployee()
	{ 
		cout << Name << endl << endl;
		cout << Address << endl << endl;
		cout << SSN;
	}

};