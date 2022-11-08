#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main()
{
	int n;
	cin >> n;

	stack<int> s;
	string f;

	for (int i = 0; i < n; i++)
	{
		cin >> f;
		if (f == "push")
		{
			int num;
			cin >> num;
			s.push(num);
		}
		else if (f == "pop")
		{
			if (!s.empty())
			{
				cout << s.top() << endl;
				s.pop();
			}
			else
				cout << "-1" << endl;
		}
		else if (f == "size")
		{
			cout << s.size() << endl;
		}
		else if (f == "empty")
		{
			cout << (s.empty() ? "1" : "0") << endl;
		}
		else if (f == "top")
		{
			if (!s.empty())
				cout << s.top() << endl;
			else
				cout << "-1" << endl;
		}
	}
}