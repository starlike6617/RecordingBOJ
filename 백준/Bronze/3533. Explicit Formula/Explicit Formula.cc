#include <iostream>
using namespace std;

int main()
{
    int arr[10];
    for (int i = 0; i < 10; i++)
        cin >> arr[i];

    int res = 0;
    for (int i = 0; i < 10; i++)
        for (int j = i + 1; j < 10; j++)
            res ^= arr[i] | arr[j];
    for (int i = 0; i < 10; i++)
        for (int j = i + 1; j < 10; j++)
            for (int k = j + 1; k < 10; k++)
                res ^= arr[i] | arr[j] | arr[k];
    cout << res;
}