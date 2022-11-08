#include <iostream>
#include <string>
using namespace std;

int main()
{
	int n;
	cin >> n;
	string str;

	for (int i = 0; i < n; i++)
	{		
		cin >> str;
		int sum = 0;

		while (!str.empty())
		{
			if (str.back() == '(')
				sum += 1;
			else
				sum -= 1;

			if (sum > 0)
			{
				cout << "NO" << endl;
				break;
			}

			str.pop_back();
		}
		
		if (sum <= 0)
			cout << (sum == 0 ? "YES" : "NO") << endl;
	}
}