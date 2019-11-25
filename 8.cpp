#include <iostream>
#include <vector>

using namespace std;

int erSieving(int &n)
{
	int d = 2;
	vector <int> f(n + 1, true);
	f[0] = false;
	f[1] = false;
	while (d * d <= n)
	{
		for (int i = d * d; i <= n; i += d)
		{
			f[i] = false;
		}
		++d;
	}

	int ans = 1;
	for (int i = 1; i <= n; ++i)
	{
		if (f[i])
		{
			ans *= i;
		}
	}

	return ans;
}

int main()
{
	int n;
	cin >> n;

	cout << erSieving(n);
}
