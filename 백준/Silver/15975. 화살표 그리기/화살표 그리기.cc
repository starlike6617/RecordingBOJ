#include <iostream>
#include <vector>
#include <algorithm>
#define endl '\n'
using namespace std;
using ll = long long;

int main()
{
    int N;
    cin >> N;

    vector<pair<int, ll>> v(N);
    for (int i = 0; i < N; i++)
    {
        cin >> v[i].second >> v[i].first;
    }

    sort(v.begin(), v.end());

    ll sum = 0;
    for (int i = 0; i < N; i++)
    {
        if (i == 0)
        {
            if (v[i].first == v[i + 1].first)
            {
                sum += v[i + 1].second - v[i].second;
            }
        }
        else if (i == N - 1)
        {
            if (v[i - 1].first == v[i].first)
            {
                sum += v[i].second - v[i - 1].second;
            }
        }
        else
        {
            ll temp1 = 1000000001;
            ll temp2 = 1000000001;
            if (v[i - 1].first == v[i].first)
            {
                temp1 = v[i].second - v[i - 1].second;
            }
            if (v[i].first == v[i + 1].first)
            {
                temp2 = v[i + 1].second - v[i].second;
            }

            if (temp1 != 1000000001 || temp2 != 1000000001)
            {
                sum += min(temp1, temp2);
            }
        }
    }

    cout << sum;
}