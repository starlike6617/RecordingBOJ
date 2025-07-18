#include <iostream>
#define endl '\n'
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    for (int i = 0; i < n - m; i++)
    {
        cout << i << ' ' << i + 1 << endl;
    }
    for (int i = n - m + 1; i < n; i++)
    {
        cout << n - m << ' ' << i << endl;
    }
}