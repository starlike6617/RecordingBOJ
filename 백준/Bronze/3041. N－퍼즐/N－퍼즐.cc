#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<pair<int, int>> v(15);
    for (int i = 0; i < 15; i++)
    {
        v[i].first = i / 4;
        v[i].second = i % 4;
    }

    int cnt = 0;
    for (int i = 0; i < 16; i++)
    {
        char c;
        cin >> c;

        if (c == '.')
        {
            continue;
        }

        int idx = c - 'A';
        cnt += abs(i / 4 - v[idx].first) + abs(i % 4 - v[idx].second);
    }

    cout << cnt;
}