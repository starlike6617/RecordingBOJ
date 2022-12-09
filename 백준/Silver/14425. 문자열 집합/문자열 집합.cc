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

    vector<string> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    sort(v.begin(), v.end());

    int cnt = 0;
    while (m--)
    {
        string str;
        cin >> str;

        if (binary_search(v.begin(), v.end(), str))
            cnt++;
    }

    cout << cnt;
}