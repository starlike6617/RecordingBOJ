#include <iostream>
using namespace std;

int main()
{
    int L, P;
    cin >> L >> P;

    int arr[5];
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
        arr[i] -= L * P;
        cout << arr[i] << ' ';
    }
}