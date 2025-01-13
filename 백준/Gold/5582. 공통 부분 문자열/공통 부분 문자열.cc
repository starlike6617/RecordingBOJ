#include <iostream>
using namespace std;

int dp[4001][4001];

int main()
{
    string A, B;
    cin >> A >> B;

    int res = 0;
    for (int i = 1; i <= A.size(); i++)
    {
        for (int j = 1; j <= B.size(); j++)
        {
            if (A[i - 1] == B[j - 1])
            {
                dp[i][j] = dp[i - 1][j - 1] + 1;
            }

            res = max(res, dp[i][j]);
        }
    }

    cout << res;
}