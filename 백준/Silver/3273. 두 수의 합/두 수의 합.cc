#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    sort(arr, arr + n);

    int x;
    cin >> x;

    int start = 0, end = n - 1, cnt = 0;
    while (start < end)
    {
        int sum = arr[start] + arr[end];

        if (sum == x)
        {
            cnt++;
            start++;
            end--;
        }

        if (sum < x)
            start++;
        else if (sum > x)
            end--;
    }

    cout << cnt;
}