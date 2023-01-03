#include <iostream>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int sum = 0;
    for (int i = 0; i < k; i++)
        sum += arr[i];

    int max = sum;
    for (int i = 0; i < n - k + 1; i++)
    {
        if (max < sum)
            max = sum;

        sum = sum - arr[i] + arr[i + k];
    }

    cout << max;
}