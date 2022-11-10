#include <iostream>
using namespace std;

int main()
{
	int n, sum;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		int k = i, sum = i;
		while (k != 0)
		{
			sum += k % 10;
			k /= 10;
		}

		if (sum == n)
		{
			cout << i;
			break;
		}

		if (i == n - 1)
			cout << 0;
	}
}