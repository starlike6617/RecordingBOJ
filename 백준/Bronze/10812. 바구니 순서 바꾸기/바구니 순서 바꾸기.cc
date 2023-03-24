#include <iostream>
using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;

    int arr[N + 1];
    for (int i = 1; i <= N; i++)
        arr[i] = i;

    while (M--)
    {
        int i, j, k;
        cin >> i >> j >> k;

        int temp[j - i + 1];
        for (int a = k; a <= j; a++)
            temp[a - k] = arr[a];
        for (int a = i; a < k; a++)
            temp[a - i + j - k + 1] = arr[a];

        for (int a = i; a <= j; a++)
            arr[a] = temp[a - i];
    }

    for (int i = 1; i <= N; i++)
        cout << arr[i] << ' ';
}