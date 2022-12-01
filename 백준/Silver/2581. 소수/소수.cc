#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

int main()
{
    int m, n;
    cin >> m >> n;

    int arr[n + 1];
    for (int i = 0; i <= n; i++)
        arr[i] = 1;
    arr[1] = 0;

    for (int i = 2; i <= sqrt(n); i++)
        for (int j = i + i; j <= n; j += i)
            arr[j] = 0;

    vector<int> v;
    for (int i = m; i <= n; i++)
    {
        if (arr[i] == 0)
            continue;
        v.push_back(i);
    }

    if (v.size())
    {
        int sum = 0;
        for (int i = 0; i < v.size(); i++)
            sum += v[i];
        int min = *min_element(v.begin(), v.end());
        cout << sum << endl
             << min << endl;
    }
    else
        cout << -1;
}