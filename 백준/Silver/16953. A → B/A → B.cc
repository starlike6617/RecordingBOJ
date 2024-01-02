#include <bits/stdc++.h>
using namespace std;

int main()
{
    int A, B;
    cin >> A >> B;

    int cnt = 0;
    while (A != B)
    {
        cnt++;

        if (B % 10 == 1)
        {
            B /= 10;
        }
        else if (B % 2 == 0)
        {
            B /= 2;
        }
        else
        {
            cout << -1;
            return 0;
        }

        if (A > B)
        {
            cout << -1;
            return 0;
        }
    }

    cout << cnt + 1;
}