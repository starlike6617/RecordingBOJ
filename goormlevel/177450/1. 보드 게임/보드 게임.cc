#include <iostream>
using namespace std;

long long dp[100001];

int main() 
{
	int N;
	cin >> N;
	
	dp[0] = 1;
	dp[1] = 1;
	dp[2] = 1;
	
	for (int i = 3; i <= N; i++)
		dp[i] = (dp[i - 1] + dp[i - 3]) % 1000000007;
	
	cout << dp[N];
}