#include <iostream>
using namespace std;

int main()
{
    int N, K;
    cin >> N >> K;

    int arr[N];
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }

    int cnt = 0;
    for (int i = N - 1; i > 0; i--)
    {
        int idx = 0;
        for (int j = 0; j <= i; j++)
        {
            if (arr[idx] < arr[j])
            {
                idx = j;
            }
        }

        if (idx != i)
        {
            cnt++;
            swap(arr[idx], arr[i]);
        }

        if (cnt == K)
        {
            for (int i : arr)
            {
                cout << i << ' ';
            }
        }
    }

    if (cnt < K)
    {
        cout << -1;
    }
}