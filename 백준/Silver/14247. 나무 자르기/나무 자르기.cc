#include <iostream>
#include <vector>
#include <algorithm>
#define endl '\n'
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<pair<long long, long long>> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i].second;
    }
    for (int i = 0; i < n; i++)
    {
        cin >> v[i].first;
    }

    sort(v.begin(), v.end());

    long long sum = 0;
    for (long long i = 0; i < n; i++)
    {
        sum += v[i].second + i * v[i].first;
    }

    cout << sum;
}