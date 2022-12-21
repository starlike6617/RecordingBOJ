#include <iostream>
#include <algorithm>
using namespace std;

bool desc(int x, int y)
{
    return x > y;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    sort(arr, arr + n, desc);

    for (int i = 0; i <= n - 3; i++)
    {
        if (arr[i] < arr[i + 1] + arr[i + 2])
        {
            cout << arr[i] + arr[i + 1] + arr[i + 2];
            break;
        }
        if (i == n - 3)
            cout << -1;
    }
}