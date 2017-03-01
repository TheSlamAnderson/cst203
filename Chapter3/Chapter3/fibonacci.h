using namespace std;

long fib(long n)
{
	if (n <= 1)							// Stopping Conditions
		return 1;
	else
		return (fib(n-1) + fib(n-2));	// Recursive Step
}