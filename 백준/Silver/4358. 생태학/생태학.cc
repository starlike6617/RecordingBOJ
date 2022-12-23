#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;

bool comp(pair<string, double> a, pair<string, double> b)
{
    return a.first < b.first;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(), cout.tie();

    string str;
    map<string, double> m;

    while (getline(cin, str))
    {
        if (cin.eof())
            break;
        m[str]++;
    }

    vector<pair<string, double>> v(m.begin(), m.end());
    sort(v.begin(), v.end(), comp);

    double sum = 0;
    for (int i = 0; i < v.size(); i++)
        sum += v[i].second;

    for (int i = 0; i < v.size(); i++)
        v[i].second = v[i].second / sum * 100;

    for (int i = 0; i < v.size(); i++)
    {
        cout << fixed;
        cout.precision(4);
        cout << v[i].first << ' ' << v[i].second << endl;
    }
}