#include <iostream>
using namespace std;

unsigned int getPrime(unsigned int n);
unsigned int isPrime(unsigned int n); 

unsigned int isPrime(unsigned int n)
{
	for (int i = 2; i < n; i++)
		if (n % i == 0)
			return 0;
	return 1;
}

unsigned int getPrime(unsigned int n)
{
	int order = 0;
	unsigned int i = 1;
	while (order != n)
	{
		i++;
		if (isPrime(i))
			order++;
	}
	return i;
} 

int main()
{
	int res = getPrime(50);
	cout << res;

	return 0;
} 
