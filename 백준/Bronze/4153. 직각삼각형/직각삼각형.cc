#include <iostream>
using namespace std;

void swap(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}

bool isRight(int x, int y, int z)
{
	if (x > y) swap(x, y);
	if (y > z) swap(y, z);

	if (x * x + y * y == z * z)
		return true;
	else
		return false;
}

int main()
{
	int a, b, c;
	while (1)
	{
		cin >> a >> b >> c;
		if (a == 0 && b == 0 && c == 0)
			return 0;

		cout << (isRight(a, b, c) ? "right" : "wrong") << endl;
	}
}