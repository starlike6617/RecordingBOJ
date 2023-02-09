#include <iostream>
using namespace std;

int main()
{
    int n, arr[5];
    cin >> n;

    int cnt = 0;
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
        if (arr[i] == n % 10)
            cnt++;
    }

    cout << cnt;
}