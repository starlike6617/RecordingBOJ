#include <iostream>
using namespace std;

int arr[501][501];

int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= i; j++)
            cin >> arr[i][j];

    for (int i = n; i > 1; i--)
        for (int j = 1; j < i; j++)
            arr[i - 1][j] += max(arr[i][j], arr[i][j + 1]);

    cout << arr[1][1];
}