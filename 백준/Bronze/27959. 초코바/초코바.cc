#include <iostream>
#define endl '\n'
using namespace std;

int main()
{
	int N, M;
	cin >> N >> M;
	cout << (N * 100 >= M ? "Yes" : "No");
}