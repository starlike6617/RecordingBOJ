#include <iostream>
using namespace std;

int main()
{	
	int n, cnt = 1;
	cin >> n;
	for (int i = 1; n > i; cnt++)
		i += 6 * cnt;
	cout << cnt;
}