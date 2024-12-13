#include <iostream>
#include <vector>
#include <algorithm>
#define endl '\n'
using namespace std;

int main()
{
    int n;
    cin >> n;

    if (n == 0)
    {
        cout << 0;
        return 0;
    }

    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    int cut = (int)((double)n * 0.15 + 0.5);

    double sum = 0;
    for (int i = cut; i < n - cut; i++)
    {
        sum += (double)v[i];
    }

    int res = (int)((double)sum / (n - cut * 2) + 0.5);

    cout << res;
}