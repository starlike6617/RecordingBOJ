#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    int A, B, K, X;
    cin >> A >> B >> K >> X;

    int cnt = 0;
    for (int i = A; i <= B; i++)
    {
        if (abs(i - K) <= X)
        {
            cnt++;
        }
    }

    cout << (cnt == 0 ? "IMPOSSIBLE" : to_string(cnt));
}