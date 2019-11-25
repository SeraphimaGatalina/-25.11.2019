#include <iostream>
#include <vector>

using namespace std;

template<typename T>
T erSieving(T &n)
{
	T d = 2;
	vector <T> f(n + 1, true);
	f[0] = false;
	f[1] = false;
	while (d * d <= n)
	{
		for (T i = d * d; i <= n; i += d)
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