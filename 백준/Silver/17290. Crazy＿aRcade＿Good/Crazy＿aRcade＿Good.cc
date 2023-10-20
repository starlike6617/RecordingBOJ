#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    int r, c;
    cin >> r >> c;
    r--, c--;

    char arr[10][10];
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            cin >> arr[i][j];
        }
    }

    bool isBoom[10][10] = {};
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (arr[i][j] == 'o')
            {
                for (int k = 0; k < 10; k++)
                {
                    isBoom[i][k] = true;
                    isBoom[k][j] = true;
                }
            }
        }
    }

    vector<int> v;
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (!isBoom[i][j])
            {
                v.push_back(abs(r - i) + abs(c - j));
            }
        }
    }

    sort(v.begin(), v.end());

    cout << v[0];
}