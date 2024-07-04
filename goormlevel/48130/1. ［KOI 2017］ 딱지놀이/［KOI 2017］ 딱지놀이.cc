#include <iostream>
using namespace std;
int main() {
	int N;
	cin >> N;
	
	while (N--)
	{
		int a[4] = {};
		int b[4] = {};
		
		int x;
		cin >> x;
		while (x--)
		{
			int tmp;
			cin >> tmp;
			a[tmp - 1]++;
		}
		
		int y;
		cin >> y;
		while (y--)
		{
			int tmp;
			cin >> tmp;
			b[tmp - 1]++;
		}
		
		char res = 'D';
		for (int i = 3; i >= 0; i--)
		{
			if (a[i] == b[i])
				continue;
			else if (a[i] > b[i])
			{
				res = 'A';
				break;
			}
			else
			{
				res = 'B';
				break;
			}
		}
		
		cout << res << endl;
	}
	
	cout << endl;
}