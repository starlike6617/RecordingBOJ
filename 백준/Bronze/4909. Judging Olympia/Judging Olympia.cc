#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    while (true)
    {
        int arr[6];
        for (int i = 0; i < 6; i++)
            cin >> arr[i];

        if (arr[0] == 0 && arr[1] == 0 && arr[2] == 0 && arr[3] == 0 && arr[4] == 0 && arr[5] == 0)
            break;

        sort(arr, arr + 6);

        int sum = 0;
        for (int i = 1; i < 5; i++)
            sum += arr[i];

        cout << (double)sum / 4 << endl;
    }
}