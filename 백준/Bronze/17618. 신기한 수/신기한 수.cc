#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    int N;
    cin >> N;

    int res = 0;
    for (int i = 1; i <= N; i++)
    {
        string s = to_string(i);

        int sum = 0;
        for (int j = 0; j < s.size(); j++)
        {
            sum += s[j] - '0';
        }

        if (i % sum == 0)
        {
            res++;
        }
    }
    cout << res;
}