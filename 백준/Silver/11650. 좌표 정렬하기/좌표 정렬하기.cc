#include <iostream>
#include <algorithm>
using namespace std;

struct Point {
	int x;
	int y;
};

bool cmp(Point a, Point b)
{
	if (a.x == b.x)
		return a.y < b.y;
	else
		return a.x < b.x;
}

Point arr[100000];

int main()
{
	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
		cin >> arr[i].x >> arr[i].y;

	sort(arr, arr + n, cmp);

	for (int i = 0; i < n; i++)
		cout << arr[i].x << ' ' << arr[i].y << '\n';
}