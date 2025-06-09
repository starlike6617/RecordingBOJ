#include <iostream>
#include <map>
#define endl '\n'
using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;

    map<string, int> m;
    for (int i = 0; i < N + M; i++)
    {
        string s;
        cin >> s;
        m[s]++;
    }

    int cnt = 0;
    for (auto p : m)
    {
        if (p.second == 2)
        {
            cnt++;
        }
    }
    cout << cnt << endl;

    for (auto p : m)
    {
        if (p.second == 2)
        {
            cout << p.first << endl;
        }
    }
}