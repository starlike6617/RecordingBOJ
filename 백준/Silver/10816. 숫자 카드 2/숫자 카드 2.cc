#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int n, m;
    cin >> n;

    vector<int> v1(n);
    for (int i = 0; i < n; i++)
        cin >> v1[i];
    cin >> m;
    vector<int> v2(m);
    for (int i = 0; i < m; i++)
        cin >> v2[i];

    sort(v1.begin(), v1.end());
    for (int i = 0; i < m; i++)
    {
        int upper = upper_bound(v1.begin(), v1.end(), v2[i]) - v1.begin();
        int lower = lower_bound(v1.begin(), v1.end(), v2[i]) - v1.begin();
        cout << upper - lower << ' ';
    }
}