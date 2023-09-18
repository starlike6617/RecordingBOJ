#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    int S;
    cin >> S;

    if (S % 4763)
    {
        cout << 0;
        return 0;
    }
    S /= 4763;

    vector<pair<int, int>> v;
    for (int i = 0; i <= 200; i++)
    {
        for (int j = 0; j <= 200; j++)
        {
            if ((i != 200 && j != 200 && i * 508 + j * 212 == S) || (j != 200 && i * 108 + j * 212 == S) ||
                (i != 200 && i * 508 + j * 305 == S) || i * 108 + j * 305 == S)
            {
                v.push_back({i, j});
            }
        }
    }

    cout << v.size() << endl;
    for (auto i : v)
    {
        cout << i.first << ' ' << i.second << endl;
    }
}