#include <iostream>
#include <vector>
#include <algorithm>
#define endl '\n'
using namespace std;
typedef long long ll;

ll arr[8][8];

void solve(char dir)
{
    vector<ll> v;

    if (dir == 'U' || dir == 'D')
    {
        for (int j = 0; j < 8; j++)
        {
            int zeroCnt = 0;
            for (int i = 0; i < 8; i++)
            {
                int idx = (dir == 'U') ? i : 7 - i;
                if (arr[idx][j] == 0)
                    zeroCnt++;
                else
                    v.push_back(arr[idx][j]);
            }

            while (zeroCnt--)
                v.push_back(0);

            for (int i = 0; i < 7; i++)
            {
                if (v[i] == v[i + 1])
                {
                    v.insert(v.begin() + i, v[i] * 2);
                    v.erase(v.begin() + i + 1, v.begin() + i + 3);
                    v.push_back(0);
                }
            }

            for (int i = 0; i < 8; i++)
            {
                int idx = (dir == 'U') ? i : 7 - i;
                arr[idx][j] = v[i];
            }

            v.clear();
        }
    }
    else
    {
        for (int i = 0; i < 8; i++)
        {
            int zeroCnt = 0;
            for (int j = 0; j < 8; j++)
            {
                int idx = (dir == 'L') ? j : 7 - j;
                if (arr[i][idx] == 0)
                    zeroCnt++;
                else
                    v.push_back(arr[i][idx]);
            }

            while (zeroCnt--)
                v.push_back(0);

            for (int j = 0; j < 7; j++)
            {
                if (v[j] == v[j + 1])
                {
                    v.insert(v.begin() + j, v[j] * 2);
                    v.erase(v.begin() + j + 1, v.begin() + j + 3);
                    v.push_back(0);
                }
            }

            for (int j = 0; j < 8; j++)
            {
                int idx = (dir == 'L') ? j : 7 - j;
                arr[i][idx] = v[j];
            }

            v.clear();
        }
    }
}

int main()
{
    for (int i = 0; i < 8; i++)
        for (int j = 0; j < 8; j++)
            cin >> arr[i][j];

    char c;
    cin >> c;

    solve(c);

    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
            cout << arr[i][j] << ' ';
        cout << endl;
    }
}