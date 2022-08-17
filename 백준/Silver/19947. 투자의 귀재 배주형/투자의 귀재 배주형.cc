#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int h, y;
	cin >> h >> y;
	vector<int> dp(11);

	dp[0] = h;
	dp[1] = h * 1.05;
	dp[2] = dp[1] * 1.05;
	dp[3] = max(dp[2] * 1.05, h * 1.2);
	dp[4] = max(dp[3] * 1.05, dp[1] * 1.2);

	for (int i = 5; i < 11; i++)
		dp[i] = max(max(dp[i - 1] * 1.05, dp[i - 3] * 1.2), dp[i - 5] * 1.35);

	cout << dp[y] << endl;
}