#include <iostream>
#include <map>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int n, L, F;
        cin >> n >> L >> F;

        map<string, int> m;
        while (n--)
        {
            string s;
            cin >> s;

            m[s.substr(L - F, F)]++;
        }

        int cnt = 0;
        for (auto it : m)
            cnt += it.second / 2;

        cout << cnt << endl;
    }
}