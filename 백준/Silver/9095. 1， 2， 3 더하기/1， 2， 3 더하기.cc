#include <iostream>
#define endl '\n'
using namespace std;

int dp[11];

int main()
{
    dp[1] = 1; // 1
    dp[2] = 2; // 1+1, 2
    dp[3] = 4; // 1+1+1, 1+2, 2+1, 3

    for (int i = 4; i <= 10; i++)
    {
        dp[i] = dp[i - 1] + dp[i - 2] + dp[i - 3];
    }

    int T;
    cin >> T;

    while (T--)
    {
        int n;
        cin >> n;
        cout << dp[n] << endl;
    }
}