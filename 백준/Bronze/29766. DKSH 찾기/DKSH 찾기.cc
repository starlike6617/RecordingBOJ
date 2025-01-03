#include <iostream>
using namespace std;

int main()
{
	string s;
	cin >> s;

	int cnt = 0;
	for (int i = 0; i < s.size(); i++)
	{
		if (i + 3 < s.size() && s.substr(i, 4) == "DKSH")
		{
			cnt++;
			i += 3;
		}
	}

	cout << cnt;
}