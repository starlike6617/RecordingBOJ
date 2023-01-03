#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int n;
    cin >> n;

    long long arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    sort(arr, arr + n);

    long long ans1, ans2, ans3, min = 3000000001;
    for (int i = 0; i < n - 2; i++)
    {
        int start = i + 1, end = n - 1;

        while (start < end)
        {
            long long sum = arr[i] + arr[start] + arr[end];

            if (min > abs(sum))
            {
                min = abs(sum);
                ans1 = arr[i];
                ans2 = arr[start];
                ans3 = arr[end];
            }

            if (sum < 0)
                start++;
            else
                end--;
        }
    }

    cout << ans1 << ' ' << ans2 << ' ' << ans3;
}