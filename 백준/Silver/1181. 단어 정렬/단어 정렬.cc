#include <iostream>
#include <algorithm>
using namespace std;

string str[20000];

bool compare(string a, string b)
{
	if (a.length() != b.length())
		return a.length() < b.length();
	else
		return a < b;
}

int main()
{
	int n;
	cin >> n;
	
	for (int i = 0; i < n; i++)
		cin >> str[i];

	sort(str, str + n, compare);

	for (int i = 0; i < n; i++)
	{
		if (str[i] == str[i + 1])
			continue;
		cout << str[i] << endl;
	}
}