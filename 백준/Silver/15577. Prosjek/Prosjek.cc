#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int N;
    cin >> N;

    double arr[N];
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }

    sort(arr, arr + N);

    double res = arr[0];
    for (int i = 1; i < N; i++)
    {
        res += arr[i];
        res /= 2;
    }

    cout << fixed;
    cout.precision(6);
    cout << res;
}