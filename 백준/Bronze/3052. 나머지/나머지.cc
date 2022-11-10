#include <iostream>
using namespace std;

int main()
{
	int num, rem[42] = {}, res = 0;
	
	for (int i = 0; i < 10; i++)
	{
		cin >> num;
		rem[num % 42]++;
	}

	for (int i = 0; i < 42; i++)
		if (rem[i] > 0)
			res++;

	cout << res;
}