#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int arr[5];
    for (int i = 0; i < 5; i++)
        cin >> arr[i];

    sort(arr, arr + 5);

    for (int i = arr[0]; i <= 10000000000; i++)
    {
        int cnt = 0;
        for (int j = 0; j < 5; j++)
            if (i % arr[j] == 0)
                cnt++;

        if (cnt >= 3)
        {
            cout << i;
            break;
        }
    }
}