#include <iostream>
#include <unordered_map>
#define endl '\n'
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;

    while (T--)
    {
        int n;
        cin >> n;

        unordered_map<string, int> m;
        for (int i = 0; i < n; i++)
        {
            string s, kind;
            cin >> s >> kind;
            m[kind]++;
        }

        int res = 1;
        for (auto it : m)
        {
            res *= (it.second + 1);
        }

        cout << res - 1 << endl;
    }
}