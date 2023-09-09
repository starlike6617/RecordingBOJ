#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int N;
    cin >> N;

    int arr[N];
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }

    sort(arr, arr + N);

    long long res = 0;
    for (int i = 0; i < N; i++)
    {
        res += abs(arr[i] - (i + 1));
    }
    cout << res;
}