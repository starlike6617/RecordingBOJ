#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    sort(a.begin(), a.end());

    for (int i = 0; i < m; i++)
    {
        int num;
        cin >> num;
        if (!binary_search(a.begin(), a.end(), num))
            cout << -1 << '\n';
        else
            cout << lower_bound(a.begin(), a.end(), num) - a.begin() << '\n';
    }
}