#include <iostream>
#include <vector>

using namespace std;

long long findAce(long long k, vector <long long>& arr)
{
	size_t arrSize = arr.size();
	long long cnt = 0;
	for (size_t i = 0; i < arrSize; i++)
	{
		auto t = arr[i];
		auto tmpK = 0;
		for (auto j = 0; t; j++)
		{
			if (t % 3 == 2)
			{
				cnt++;
				tmpK++;
			}
			t /= 3;
		}
		if (tmpK < k)
		{
			cout << arr[i] << " ";
		}
	}

	return cnt;
}

int main()
{
	long long n, k;
	cin >> n >> k;

	vector <long long> arr(n);

	for (auto i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	findAce(k, arr);

}
/*
 * перебор эффективный, т.к. работает за O(n * log m), где m -- средняя длина чисел
 * выводим только палиндромы
 */