#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    int N;
    cin >> N;

    int arr[N];
    for (int i = 0; i < N; i++)
        cin >> arr[i];

    sort(arr, arr + N);

    for (int i : arr)
        cout << i << ' ';
}