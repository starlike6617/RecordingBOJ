#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    n = 1000 - n;

    int arr[6] = {500, 100, 50, 10, 5, 1};
    int cnt = 0;

    for (int i = 0; i < 6; i++)
    {
        cnt += n / arr[i];
        n %= arr[i];
    }

    cout << cnt;
}