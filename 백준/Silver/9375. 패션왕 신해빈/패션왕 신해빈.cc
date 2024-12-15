#include <iostream>
#include <map>
#include <algorithm>
#define endl '\n'
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int n;
        cin >> n;

        if (n == 0)
        {
            cout << 0 << endl;
            continue;
        }

        map<string, int> m;
        while (n--)
        {
            string cloth, kind;
            cin >> cloth >> kind;

            m[kind]++;
        }

        long long res = 1;
        for (auto it : m)
        {
            res *= it.second + 1;
        }

        cout << res - 1 << endl;
    }
}