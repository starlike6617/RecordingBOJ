#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b)
{
    return a.first > b.first;
}

int main()
{
    vector<pair<int, int>> v(8);
    for (int i = 0; i < 8; i++)
    {
        cin >> v[i].first;
        v[i].second = i + 1;
    }

    sort(v.begin(), v.end(), cmp);

    int sum = 0;
    vector<int> res(5);
    for (int i = 0; i < 5; i++)
    {
        sum += v[i].first;
        res[i] = v[i].second;
    }

    sort(res.begin(), res.end());

    cout << sum << endl;
    for (int i : res)
        cout << i << ' ';
}