#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int na, nb;
    cin >> na >> nb;

    vector<int> a(na), b(nb), res;
    for (int i = 0; i < na; i++)
        cin >> a[i];
    for (int i = 0; i < nb; i++)
        cin >> b[i];

    sort(b.begin(), b.end());

    for (int i = 0; i < a.size(); i++)
        if (!binary_search(b.begin(), b.end(), a[i]))
            res.push_back(a[i]);

    sort(res.begin(), res.end());
    cout << res.size() << '\n';
    for (int i = 0; i < res.size(); i++)
        cout << res[i] << ' ';
}