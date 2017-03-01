#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

class NAME
{

	private:
		string FirstName;
		string MiddleName;
		string LastName;
			
	public:
		NAME()
		{
			FirstName = "John";
			MiddleName = "H.";
			LastName = "Doe";
		}

		NAME(string Fn, string Mn, string Ln)
		{
			FirstName = Fn;
			MiddleName = Mn;
			LastName = Ln;
		}

	~NAME(){;}//destructor
	string getFirstLast(){return FirstName; return MiddleName; return LastName;}
	
	void prtName()
	{ 
		cout << FirstName << ' '<< MiddleName << ' ' << LastName;
	}		

};