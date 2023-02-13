#include <iostream>
using namespace std;

int main()
{
    int arr[3], maxIdx = 0;
    for (int i = 0; i < 3; i++)
        cin >> arr[i];

    int res = 1000000;
    for (int i = 0; i < 3; i++)
    {
        int temp = 0;
        for (int j = 0; j < 3; j++)
            temp += arr[j] * abs(i - j) * 2;

        if (res > temp)
            res = temp;
    }

    cout << res;
}