#include <iostream>
#include <vector>
#include <algorithm>
#define endl '\n'
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int M;
        cin >> M;

        int res = 0;
        int cur = 0;

        while (M--)
        {
            int p1, p2;
            cin >> p1 >> p2;

            cur = cur + p1 - p2;
            res = max(res, -cur);
        }

        cout << res << endl;
    }
}