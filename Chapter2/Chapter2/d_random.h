#include <iostream>

using namespace std;

class randomNumber
{
	public:
		long random();						// return a 32-bit random integer m, 1 <= m <= 2^31-2
		long random(long n);				// return a 32-bit random integer m, 0 <= m <= n-1, where n <= 2^31-1
		double frandom();					// return a real number x, 0 <= x < 1

	private:
		static const long A;
		static const long M;
		static const long Q;
		static const long R;

	long seed;

};

const long randomNumber::A = 48271;
const long randomNumber::M = 2147483647;
const long randomNumber::Q = M / A;
const long randomNumber::R = M % A;

long randomNumber::random()
{
	long tmpSeed = A * ( seed % Q ) - R * ( seed / Q );

	if( tmpSeed >= 0 )
		 seed = tmpSeed;
	else
		 seed = tmpSeed + M;

	return seed;
}

long randomNumber::random(long n)
{
	double fraction = double(random())/double(M);
	return int(fraction * n);
}

double randomNumber::frandom()
{
	return double(random())/double(M);
}