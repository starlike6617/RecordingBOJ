#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int N;
    cin >> N;

    queue<int> q;
    vector<pair<int, int>> v;

    for (int i = 0; i < N; i++)
    {
        q.push(i);
    }

    int cnt = 1;
    while (q.size() > 1)
    {
        for (int i = 0; i < cnt; i++)
        {
            q.push(q.front());
            q.pop();
        }

        v.push_back({q.front(), cnt});
        q.pop();

        cnt++;
    }
    v.push_back({q.front(), cnt});

    sort(v.begin(), v.end());

    for (auto p : v)
    {
        cout << p.second << ' ';
    }
}