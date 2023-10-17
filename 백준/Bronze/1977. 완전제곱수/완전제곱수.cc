#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    int M, N;
    cin >> M >> N;

    int sum = 0;
    int minV = 10001;
    for (int i = M; i <= N; i++)
    {
        if (sqrt(i) == (int)sqrt(i))
        {
            sum += i;
            minV = min(minV, i);
        }
    }

    if (sum == 0)
    {
        cout << -1;
    }
    else
    {
        cout << sum << endl;
        cout << minV;
    }
}