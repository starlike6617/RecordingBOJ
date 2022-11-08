#include <iostream>
#include <stack>
using namespace std;

int main()
{
	int n, num, sum = 0;
	cin >> n;
	stack<int> s;

	for (int i = 0; i < n; i++)
	{
		cin >> num;
		if (num != 0)
			s.push(num);
		else
			s.pop();
	}

	for (int i = 0; !s.empty(); i++)
	{
		sum += s.top();
		s.pop();
	}

	cout << sum << endl;
}