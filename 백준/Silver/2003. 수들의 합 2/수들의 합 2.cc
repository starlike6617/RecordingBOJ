#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int start = 0, end = 0, cnt = 0, sum = arr[0];
    while (end < n)
    {
        if (sum == m)
        {
            cnt++;

            sum -= arr[start];
            start++;

            end++;
            sum += arr[end];
        }
        else if (sum < m)
        {
            end++;
            sum += arr[end];
        }
        else if (sum > m)
        {
            sum -= arr[start];
            start++;
        }
    }

    cout << cnt;
}