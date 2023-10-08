#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

bool cmp(pair<string, double> a, pair<string, double> b)
{
    return a.second > b.second;
}

int main()
{
    while (true)
    {
        int N;
        cin >> N;

        if (N == 0)
        {
            break;
        }

        vector<pair<string, double>> v(N);
        for (int i = 0; i < N; i++)
        {
            cin >> v[i].first >> v[i].second;
        }

        sort(v.begin(), v.end(), cmp);

        for (int i = 0; i < v.size(); i++)
        {
            cout << v[i].first << ' ';
            if (i == v.size() - 1 || v[i].second != v[i + 1].second)
            {
                break;
            }
        }
        cout << endl;
    }
}