#include <iostream>
using namespace std;

int main()
{
    int arr[10];
    for (int i = 0; i < 10; i++)
        cin >> arr[i];

    cout << arr[0] * 6 + arr[1] * 3 + arr[2] * 2 + arr[3] + arr[4] * 2 << ' ';
    cout << arr[5] * 6 + arr[6] * 3 + arr[7] * 2 + arr[8] + arr[9] * 2;
}