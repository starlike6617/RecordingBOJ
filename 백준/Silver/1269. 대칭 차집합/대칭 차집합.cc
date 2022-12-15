#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int na, nb;
    cin >> na >> nb;

    vector<int> a(na), b(nb);
    for (int i = 0; i < na; i++)
        cin >> a[i];
    for (int i = 0; i < nb; i++)
        cin >> b[i];

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    int cnt = 0;
    for (int i = 0; i < nb; i++)
        if (binary_search(a.begin(), a.end(), b[i]))
            cnt++;

    cout << na + nb - cnt * 2;
}