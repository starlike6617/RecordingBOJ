#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;

    priority_queue<int, vector<int>, greater<int>> pq;
    while (N--)
    {
        int dice;
        cin >> dice;
        pq.push(dice);
    }

    vector<vector<int>> v;
    while (!pq.empty())
    {
        bool canInsert = false;
        int idx = 0;
        for (int i = 0; i < v.size(); i++)
        {
            if (v[i].size() <= pq.top())
            {
                canInsert = true;
                idx = i;
                break;
            }
        }

        if (canInsert)
        {
            v[idx].push_back(pq.top());
        }
        else
        {
            vector<int> temp;
            temp.push_back(pq.top());
            v.push_back(temp);
        }

        pq.pop();
    }

    cout << v.size();
}