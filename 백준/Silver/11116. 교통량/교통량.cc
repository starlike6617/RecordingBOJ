#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#define endl '\n'
using namespace std;

int main()
{
    int n;
    cin >> n;

    while (n--)
    {
        int m;
        cin >> m;

        vector<int> vL, vR;
        queue<int> q;

        for (int i = 0; i < m; i++)
        {
            int t;
            cin >> t;

            if (q.empty())
            {
                q.push(t);
            }
            else if (q.front() == t - 500)
            {
                vL.push_back(q.front());
                q.pop();
            }
            else
            {
                q.push(t);
            }
        }
        for (int i = 0; i < m; i++)
        {
            int t;
            cin >> t;

            if (q.empty())
            {
                q.push(t);
            }
            else if (q.front() == t - 500)
            {
                vR.push_back(q.front());
                q.pop();
            }
            else
            {
                q.push(t);
            }
        }

        int cnt = 0;
        for (int i : vL)
        {
            if (find(vR.begin(), vR.end(), i + 1000) != vR.end())
            {
                cnt++;
            }
        }

        cout << cnt << endl;
    }
}