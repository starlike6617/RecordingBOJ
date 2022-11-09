#include <iostream>
using namespace std;

int main()
{
	int n, sum = 0;
	cin >> n;

	for (int i = 7; i >= 0; i--)
		if (((n >> i) & 1) == 1)
			sum += 1;

	cout << sum;
}