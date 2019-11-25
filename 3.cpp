#include <iostream>
#include <vector>

using namespace std;
void erSieving(long long n, vector <bool> &isPrime)
{
	long long d = 2;
	while (d * d <= n)
	{
		if (isPrime[d])
		{
			for (auto i = d * d; i <= n; i += d)
			{
				isPrime[i] = false;
			}
		}
		++d;
	}
	
}

int main()
{
	long long n;
	cin >> n;
	vector <bool> isPrime(n + 1, true);
	isPrime[0] = false;
	isPrime[1] = false;
	
	erSieving(n, isPrime);
	
	for (auto i = 0; i <= n; i++)
	{
		if (!isPrime[i])
		{
			cout << i << '\n';
		}
	}
}