#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int start = 0, end = n - 1, min = 2000000000;
    int ans1, ans2;
    while (start < end)
    {
        int sum = arr[start] + arr[end];

        if (min > abs(sum))
        {
            min = abs(sum);
            ans1 = arr[start];
            ans2 = arr[end];

            if (min == 0)
                break;
        }

        if (sum < 0)
            start++;
        else
            end--;
    }

    cout << ans1 << ' ' << ans2;
}