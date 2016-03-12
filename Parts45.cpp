#include "Parts45.h"
#include "Parts123.h"
int gcd(int x, int y)
{
	//Base Case
	if (x < 0)
		x *= (-1);
	if (y < 0)
		y *= (-1);
	if (x == 0)
		return y;
	if (y == 0)
		return x;

	//Recursive Case
	if (x > y)
		return gcd(x - y, y);
	else if (y > x)
		return gcd(x, y - x);
}

int fib(int n)
{
	//Base Case
	if (n <= 2)
		return 1;

	//Recursive Case
	else
		return fib(n - 1) + fib(n - 2);
}

int pow(int x, int y)
{
	//Base Case
	if (y == 0)
		return 1;

	//Recursive Case
	return x*pow(x, y - 1);
}

void tri(int x)
{
	if (x == 0)
	{
		cout << endl;
	}
	else if(x%3 == 1)
	{

	}
	else
	{
		tri(x - 1);
		cout << endl;
		for (int i = 0; i < x; i++)
		{
			cout << "* ";
		}
	}
}

int gcd_iter(int x, int y)
{
	if (x < 0)
		x *= (-1);
	if (y < 0)
		y *= (-1);
	if (x == 0)
		return y;
	if (y == 0)
		return x;
	while (x != 0 && y != 0)
	{
		if (x > y)
			x = x - y;
		else
			y = y - x;
	}
	if (x <= 0)
		return y;
	if (y <= 0)
		return x;
}
int fib_iter(int n) 
{
	
	int x = 0;
	int y = 1;
	int z;
	if (n == 1 || n == 2) 
		return 1; 
	for (int i = 0; i < n - 1; i++) \
	{    
	z = x;
	x = y;
	y = z + y;
	}
		return y;
}
int pow_iter(int x, int y) {
	int pow = x;
		
	if (y == 0) 
		return 1;
	if (y == 1) 
		return x;
		
	for (int i = 2; i <= y; i++)
	{
	pow *= x;
	}
	
	return pow;
	
}