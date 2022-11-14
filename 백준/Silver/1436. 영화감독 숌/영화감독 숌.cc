#include <iostream>
#include <string>
using namespace std;

int main()
{
	int n;
	cin >> n;
	string str = "666";
	int num = stoi(str);

	while (1)
	{
		if (str.find("666") != string::npos)
		{
			n--;
			if (n == 0)
			{
				cout << num;
				break;
			}
		}
		num++;
		str = to_string(num);
	}
}