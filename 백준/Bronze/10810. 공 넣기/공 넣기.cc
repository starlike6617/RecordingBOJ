#include <iostream>
using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;

    int arr[N + 1] = {};
    while (M--)
    {
        int i, j, k;
        cin >> i >> j >> k;

        for (int a = i; a <= j; a++)
            arr[a] = k;
    }

    for (int i = 1; i <= N; i++)
        cout << arr[i] << ' ';
}