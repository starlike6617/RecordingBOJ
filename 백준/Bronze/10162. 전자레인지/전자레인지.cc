#include <iostream>
#include <vector>
#include <algorithm>
#define endl '\n'
using namespace std;

int main()
{
    int T;
    cin >> T;

    int cnt[3] = {};
    while (T > 0)
    {
        if (T >= 300)
        {
            cnt[0] += T / 300;
            T %= 300;
        }
        else if (T >= 60)
        {
            cnt[1] += T / 60;
            T %= 60;
        }
        else if (T >= 10)
        {
            cnt[2] += T / 10;
            T %= 10;
        }
        else
        {
            cout << -1;
            return 0;
        }
    }

    for (int i : cnt)
    {
        cout << i << ' ';
    }
}