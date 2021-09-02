#include <math.h>
#include <iostream>

using namespace std;

int recursionSum(int n)
{
	// stop recursion when n is 0 or 1
	if (n <= 1)
	{
		return 1;
	}
	else
	{	// return the sum of the number
		return n + recursionSum(n - 1);
	}
}
// Return the sum of the even squre number 
int evenSqure(int n)
{
	if (n == 0)
	{
		return 0;
	}
	else if (n%2 == 0)
	{
		return n * n + evenSqure(n - 1);
	}
	else
	{
		return evenSqure(n - 1);
	}
}
int evenSquare2(int n)
{
	if (n == 0)
	{
		return 0;
	}
	else
	{
		return pow(n + n, 2) + evenSquare2(n - 1);
	}
}

// return Fabnancci Number
int fibNumber(int n)
{
	if (n <= 1)
	{
		return n;
	}
	else
	{
		return fibNumber(n - 1) + fibNumber(n - 2);
	}
}

// find string s which length is L contains charactor c
bool linear(string s, int l, char c)
{
	if (l<0)
	{
		return false;
	}
	else if (s[l] == c)
	{
		return true;
	}
	else
	{
		return linear(s, l - 1, c);
	}
}
int main()
{
	int sumofNumbers = recursionSum(3);
	int sumofEvenNumber = evenSqure(5);
	int fibofNumber = fibNumber(9);
	cout << "sum of Numbers = " << sumofNumbers << endl;
	cout << "sum of even Square  = " << sumofEvenNumber << endl;
	cout << "fib number is " << fibNumber << endl;
	string Hello = "Hello";
	char c = 'e';
	bool co = linear(Hello, Hello.length(), c);

	cout << "the sting has charactor " << co << endl;
	return 0;
}