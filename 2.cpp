#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	
	long long left, right;
	cin >> left;
	vector <long long> arr;
	//even length
	if (left % 2 == 0)
	{
		left = pow(10, left / 2 - 1);
		right = left * 10;
		
		
		for (long long i = left; i < right; i++)
		{
			cout << i;
			long long t = i;
			while (t)
			{
				cout << t % 10;
				t /= 10;
			}
			cout << "\n";
		}
	}
	//odd length
	else
	{
		left = pow(10, left / 2 - 1);
		right = left * 10;


		for (long long i = left; i < right; i++)
		{
			for (int j = 0; j < 10; j++)
			{
				cout << i << j;

				long long t = i;
				while (t)
				{
					cout << t % 10;
					t /= 10;
				}
				cout << "\n";
			}
		}
	}
}
/*
 *программа эффективная, потому что не является перебором и выводит только нужные числа
 */
