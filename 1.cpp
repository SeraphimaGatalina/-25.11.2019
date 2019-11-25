#include <iostream>

long long sum = 0;

int main()
{
	for (int i = 1111111; i <= 9999999; i++)
	{
		int arr[7];
		long long tmp_sum = 0;
		bool f = false;
		auto t = i;
		for (auto j = 0; t; j++)
		{
			if (t % 10 == 0)
			{
				f = true;
				break;
			}
			arr[j] = t % 10;
			tmp_sum += t % 10;
			t /= 10;
		}
		
		if (!f && tmp_sum % 5 == 0)
		{
			for (int h = 0; h < 7; h++)
			{
				for (int k = h + 1; k < 7; k++)
				{
					if (arr[h] == arr[k])
						f = true;
				}
			}
			
			if (!f)
			{
				std::cout << i << '\n';
				sum += i;
			}
		}
	}
	std::cout << sum;
}
