#include <iostream>
#include <cmath>
using namespace std;

int arr[246913] = {};

int main()
{
    while (1)
    {
        int n, cnt = 0;
        cin >> n;

        if (n == 0)
            break;

        for (int i = 0; i < n * 2 + 1; i++)
            arr[i] = 1;
        arr[1] = 0;

        for (int i = 2; i <= sqrt(n * 2); i++)
            for (int j = i + i; j <= n * 2; j += i)
                arr[j] = 0;

        for (int i = n + 1; i <= n * 2; i++)
        {
            if (arr[i] == 0)
                continue;
            cnt++;
        }

        cout << cnt << '\n';
    }
}