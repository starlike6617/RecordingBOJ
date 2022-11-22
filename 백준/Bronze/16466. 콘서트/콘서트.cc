#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int v[n] = {};
    for (int i = 0; i < n; i++)
        cin >> v[i];

    sort(v, v + n);

    int i;
    for (i = 0; i < n; i++)
        if (v[i] != i + 1)
        {
            cout << i + 1;
            break;
        }

    if (i == n)
        cout << i + 1;
}