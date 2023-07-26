#include <iostream>
#include <map>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int N;
    char c;
    cin >> N >> c;

    map<string, int> m;
    while (N--)
    {
        string s;
        cin >> s;
        m[s]++;
    }

    int cnt = 0;
    for (auto it : m)
    {
        cnt++;
    }

    if (c == 'Y')
    {
        cout << cnt;
    }
    else if (c == 'F')
    {
        cout << cnt / 2;
    }
    else
    {
        cout << cnt / 3;
    }
}