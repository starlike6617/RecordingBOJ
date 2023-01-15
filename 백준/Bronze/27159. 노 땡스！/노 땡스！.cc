#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    int arr[N];
    for (int i = 0; i < N; i++)
        cin >> arr[i];

    int sum = arr[0];
    for (int i = 1; i < N; i++)
    {
        if (arr[i - 1] + 1 == arr[i])
            continue;
        else
            sum += arr[i];
    }

    cout << sum;
}