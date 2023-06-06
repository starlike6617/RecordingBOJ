#include <iostream>
using namespace std;

int main()
{
    int arr[3];
    for (int i = 0; i < 3; i++)
        cin >> arr[i];
    cout << max(arr[2] - arr[1] - 1, arr[1] - arr[0] - 1);
}