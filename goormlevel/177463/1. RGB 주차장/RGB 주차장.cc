#include <iostream>
#define mod 100000007
using namespace std;

long long dp[10001];

int main() {
	int N;
	cin >> N;
	
	dp[1] = 3;
	dp[2] = 6;
	
	for (int i = 3; i <= N; i++)
		dp[i] = 2 * dp[i - 1] % mod;
	
	cout << dp[N];
}