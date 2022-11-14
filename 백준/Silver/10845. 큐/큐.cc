#include <iostream>
#include <queue>
using namespace std;

int main()
{
	int n;
	cin >> n;

	queue<int> q;
	string s;

	for (int i = 0; i < n; i++)
	{
		cin >> s;
		if (s == "push")
		{
			int num;
			cin >> num;
			q.push(num);
		}
		else if (s == "pop")
		{
			if (!q.empty())
			{
				cout << q.front() << '\n';
				q.pop();
			}
			else
				cout << -1 << '\n';
		}
		else if (s == "size")
		{
			cout << q.size() << '\n';
		}
		else if (s == "empty")
		{
			cout << (!q.empty() ? 0 : 1) << '\n';
		}
		else if (s == "front")
		{
			if (!q.empty())
				cout << q.front() << '\n';
			else
				cout << -1 << '\n';
		}
		else if (s == "back")
		{
			if (!q.empty())
				cout << q.back() << '\n';
			else
				cout << -1 << '\n';
		}
	}
}