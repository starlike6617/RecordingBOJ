#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int n, m;
    cin >> n >> m;

    int a[n], b[m];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < m; i++)
        cin >> b[i];

    int s1 = 0, s2 = 0;
    while (s1 < n && s2 < m)
    {
        if (a[s1] < b[s2])
        {
            cout << a[s1] << ' ';
            s1++;
        }
        else
        {
            cout << b[s2] << ' ';
            s2++;
        }
    }

    while (s1 < n)
    {
        cout << a[s1] << ' ';
        s1++;
    }

    while (s2 < m)
    {
        cout << b[s2] << ' ';
        s2++;
    }
}