#include <iostream>
#include <cmath>
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
    {
        for (int j = i + i; j <= n; j += i)
        {
            arr[j] = 0;
        }
    }

    for (int i = m; i <= n; i++)
    {
        if (arr[i] == 0)
            continue;
        cout << i << '\n';
    }
}