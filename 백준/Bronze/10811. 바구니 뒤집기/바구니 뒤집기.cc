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
        int i, j;
        cin >> i >> j;

        while (i < j)
        {
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }

    for (int i = 1; i <= N; i++)
        cout << arr[i] << ' ';
}