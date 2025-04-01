#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

double getDist(vector<pair<double, double>> vec, int a, int b)
{
    return sqrt(pow(vec[a].first - vec[b].first, 2) + pow(vec[a].second - vec[b].second, 2));
}

int main()
{
    int n;
    cin >> n;

    vector<pair<double, double>> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i].first >> v[i].second;
    }

    int m;
    cin >> m;

    while (m--)
    {
        int p;
        cin >> p;

        vector<int> route(p);
        for (int i = 0; i < p; i++)
        {
            cin >> route[i];
        }

        double res = 0;
        for (int i = 0; i < p - 1; i++)
        {
            res += getDist(v, route[i], route[i + 1]);
        }

        cout << round(res) << endl;
    }
}