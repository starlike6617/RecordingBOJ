#include <iostream>
using namespace std;

int maxArr(int a[], int len)
{
    int totalMax = a[0], curMax = a[0];
    for (int i = 1; i < len; i++)
    {
        curMax = max(curMax + a[i], a[i]);
        totalMax = max(totalMax, curMax);
    }
    return totalMax;
}

int main()
{
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << maxArr(arr, n);
}