#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        sort(arr, arr + n);

        int max = 0, temp = arr[0], cur;
        for (int i = 2; i < n; i += 2)
        {
            cur = (temp > arr[i] ? 1 : -1) * (temp - arr[i]);
            if (max < cur)
                max = cur;
            temp = arr[i];
        }

        for (int i = n - 1 - n % 2; i > 0; i -= 2)
        {
            cur = (temp > arr[i] ? 1 : -1) * (temp - arr[i]);
            if (max < cur)
                max = cur;
            temp = arr[i];
        }

        cout << max << '\n';
    }
}