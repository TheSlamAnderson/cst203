#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

class ADDRESS
{

	private:
		string Street;
		string City;
		string State;
		string Zip ;
			
	public:
		ADDRESS()
		{
			Street = "99999 Sunset Boulevard";
			City = "Beverly Hills";
			State = "CA";
			Zip = "99999";
		}

		ADDRESS(string St, string Ct, string st, string zip)
		{
			Street = St;
			City = Ct;
			State = st;
			Zip = zip;
		}

	~ADDRESS(){;}//destructor
	string getCity(){return City;}
	string getState(){return State;}
	string getStreet(){return Street;}
	string getZip(){return Zip;}
	
	void prtAddress()
	{ 
		cout << Street << ", " << City << ", " << State << ", " << Zip;
	}		

};