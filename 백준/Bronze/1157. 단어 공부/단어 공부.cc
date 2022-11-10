#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str;
	cin >> str;
	int alp[26] = {};

	for (int i = 0; i < str.length(); i++)
	{
		if (str[i] < 91)
			alp[str[i] - 65] += 1;
		else
			alp[str[i] - 97] += 1;
	}

	int max1 = 0, max2 = 0, maxIndex;
	for (int i = 0; i < 26; i++)
		if (max1 < alp[i])
		{
			max1 = alp[i];
			maxIndex = i;
		}
	
	alp[maxIndex] = 0;
	for (int i = 0; i < 26; i++)
		if (max2 < alp[i])
			max2 = alp[i];
	
	cout << (max1 == max2 ? '?' : (char)(maxIndex + 65));
}