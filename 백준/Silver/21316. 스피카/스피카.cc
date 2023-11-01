#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    vector<int> v[13];
    for (int i = 1; i <= 12; i++)
    {
        int x, y;
        cin >> x >> y;

        v[x].push_back(y);
        v[y].push_back(x);
    }

    for (int i = 1; i <= 12; i++)
    {
        if (v[i].size() == 3)
        {
            bool chk[3] = {};
            for (int j : v[i])
            {
                if (v[j].size() == 1)
                {
                    chk[0] = true;
                }
                else if (v[j].size() == 2)
                {
                    chk[1] = true;
                }
                else if (v[j].size() == 3)
                {
                    chk[2] = true;
                }
            }

            if (chk[0] && chk[1] && chk[2])
            {
                cout << i;
                break;
            }
        }
    }
}