#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    int arr[4] = {10001, -10001, 10001, -10001};
    while (N--)
    {
        int x, y;
        cin >> x >> y;

        arr[0] = min(arr[0], x);
        arr[1] = max(arr[1], x);
        arr[2] = min(arr[2], y);
        arr[3] = max(arr[3], y);
    }
    cout << (arr[1] - arr[0]) * (arr[3] - arr[2]);
}