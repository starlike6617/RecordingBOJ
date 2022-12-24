#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string bigAdd(string a, string b)
{
    long long sum = 0;
    string res;

    while (!a.empty() || !b.empty() || sum)
    {
        if (!a.empty())
        {
            sum += a.back() - '0';
            a.pop_back();
        }
        if (!b.empty())
        {
            sum += b.back() - '0';
            b.pop_back();
        }
        res.push_back((sum % 10) + '0');
        sum /= 10;
    }

    reverse(res.begin(), res.end());
    return res;
}

bool operator<=(string a, string b)
{
    if (a.size() == b.size())
    {
        for (int i = 0; i < a.size(); i++)
        {
            if (a[i] < b[i])
                return true;
            else if (a[i] > b[i])
                return false;
        }
        return true;
    }
    else if (a.size() < b.size())
        return true;
    else
        return false;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    string dp[1000];
    dp[0] = "1";
    dp[1] = "2";
    for (int i = 2; i < 1000; i++)
        dp[i] = bigAdd(dp[i - 1], dp[i - 2]);

    while (1)
    {
        string a, b;
        cin >> a >> b;

        if (a == "0" && b == "0")
            break;

        int cnt = 0;
        for (int i = 0; i < 1000; i++)
            if (a <= dp[i] && dp[i] <= b)
                cnt++;
        cout << cnt << '\n';
    }
}