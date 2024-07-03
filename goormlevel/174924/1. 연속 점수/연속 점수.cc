#include <iostream>
using namespace std;
int main() {
	int N;
	cin >> N;
	
	int arr[N], maxV = 0;
	for (int i = 0; i < N; i++)
	{
		cin >> arr[i];
		maxV = max(maxV, arr[i]);
	}
	
	int res = 0, tmp = arr[0];
	for (int i = 1; i < N; i++)
	{
		if (arr[i] == arr[i - 1] + 1)
		{
			tmp += arr[i];
		}
		else
		{
			tmp = arr[i];
		}
		
		res = max(res, tmp);
	}
	
	cout << max(maxV, res);
}