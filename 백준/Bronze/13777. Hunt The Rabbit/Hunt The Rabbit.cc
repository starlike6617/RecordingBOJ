#include <iostream>
using namespace std;

int main()
{
	while (1)
	{
		int num, min = 1, max = 50, guess;
		cin >> num;
		if (num == 0)
			break;
		
		while (1)
		{
			guess = (min + max) / 2;

			if (num == guess)
			{
				cout << guess << endl;
				break;
			}
			else if (num > guess)
			{
				cout << guess << " ";
				min = guess + 1;
			}
			else
			{
				cout << guess << " ";
				max = guess - 1;
			}
		}
	}
}