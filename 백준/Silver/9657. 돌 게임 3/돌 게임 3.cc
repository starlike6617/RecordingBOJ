#include <iostream>
#include <vector>
#include <algorithm>
#define endl '\n'
using namespace std;

int main()
{
    /*
    1, 3, 4개씩 / 상근 승 = 1 / 창영 승 = 0
    f(1) = 1 [1]
    f(2) = 0 [1 1]
    f(3) = 1 [3]
    f(4) = 1 [4]
    */

    bool dp[1001];

    dp[1] = true;
    dp[2] = false;
    dp[3] = true;
    dp[4] = true;

    for (int i = 5; i <= 1000; i++)
    {
        if (dp[i - 1] && dp[i - 3] && dp[i - 4])
        {
            dp[i] = false;
        }
        else
        {
            dp[i] = true;
        }
    }

    int N;
    cin >> N;

    cout << (dp[N] ? "SK" : "CY");
}