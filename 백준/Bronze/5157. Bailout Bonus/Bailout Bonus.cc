#include <iostream>
#include <map>
#include <vector>
using namespace std;

int main()
{
    int k;
    cin >> k;

    map<int, int> m;
    vector<int> v;

    for (int i = 1; i <= k; i++)
    {
        int c, b, n, r, ans = 0;
        cin >> c >> b >> n >> r;

        m.clear();
        v.clear();

        for (int j = 0; j < b; j++)
        {
            int x;
            cin >> x;
            v.push_back(x);
        }

        for (int j = 0; j < n; j++)
        {
            int c, p;
            cin >> c >> p;
            m[c] += p * r / 100;
        }

        for (auto j : v)
            ans += m[j];

        cout << "Data Set " << i << ":" << endl;
        cout << ans << endl
             << endl;
    }
}