#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        int row[8] = {};
        while (n--)
        {
            int c, r;
            cin >> c >> r;
            row[r - 1]++;
        }

        int res = 0;
        for (int i : row)
            res = max(res, i);
        cout << res << endl;
    }
}