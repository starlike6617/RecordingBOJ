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
        for (int j = 0; j < i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                cnt++;
            }

            if (cnt == K)
            {
                cout << arr[j] << ' ' << arr[j + 1];
                return 0;
            }
        }
    }

    if (cnt < K)
    {
        cout << -1;
    }
}