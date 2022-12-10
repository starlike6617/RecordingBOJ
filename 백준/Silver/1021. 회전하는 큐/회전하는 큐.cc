#include <iostream>
#include <deque>
#include <algorithm>
using namespace std;

int cnt = 0;

void left(deque<int> &d)
{
    d.push_back(d.front());
    d.pop_front();
    cnt++;
}

void right(deque<int> &d)
{
    d.push_front(d.back());
    d.pop_back();
    cnt++;
}

int main()
{
    int n, m;
    cin >> n >> m;

    deque<int> d;
    for (int i = 1; i <= n; i++)
        d.push_back(i);

    while (m--)
    {
        int k;
        cin >> k;

        int idx;
        for (int i = 0; i < d.size(); i++)
        {
            if (d[i] == k)
            {
                idx = i;
                break;
            }
        }

        while (1)
        {
            if (k == d.front())
            {
                d.pop_front();
                break;
            }

            if (idx > d.size() / 2)
                right(d);
            else
                left(d);
        }
    }

    cout << cnt;
}