#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
    if (a < b)
    {
        swap(a, b);
    }

    if (b == 0)
    {
        return a;
    }
    return gcd(b, a % b);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;

    map<pair<int, int>, int> m;
    int axisXpos = 0, axisXneg = 0;
    int axisYpos = 0, axisYneg = 0;
    while (N--)
    {
        int x, y;
        cin >> x >> y;

        if (x == 0)
        {
            y > 0 ? axisYpos++ : axisYneg++;
        }
        else if (y == 0)
        {
            x > 0 ? axisXpos++ : axisXneg++;
        }
        else
        {
            bool Xneg = x < 0;
            bool Yneg = y < 0;

            x = abs(x);
            y = abs(y);

            int g = gcd(x, y);
            x /= g;
            y /= g;

            if (Xneg && Yneg)
            {
                m[{-x, -y}]++;
            }
            else if (Xneg)
            {
                m[{-x, y}]++;
            }
            else if (Yneg)
            {
                m[{x, -y}]++;
            }
            else
            {
                m[{x, y}]++;
            }
        }
    }

    int res = 0;
    for (auto p : m)
    {
        res = max(res, p.second);
    }
    res = max(res, axisXpos);
    res = max(res, axisXneg);
    res = max(res, axisYpos);
    res = max(res, axisYneg);

    cout << res;
}