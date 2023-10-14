#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    int N;
    cin >> N;

    int res = 0;
    while (N--)
    {
        int C, K;
        cin >> C >> K;
        res += C * K;
    }

    cout << res;
}