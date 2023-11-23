#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    int N;
    cin >> N;

    string res;
    while (N--)
    {
        string s;
        cin >> s;

        for (char c : s)
        {
            if (c == 'S')
            {
                res = s;
                break;
            }
        }
    }

    cout << res;
}