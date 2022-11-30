#include <iostream>
using namespace std;

int main()
{
    int arr[6];
    for (int i = 0; i < 6; i++)
    {
        cin >> arr[i];
        if (i < 2)
            cout << 1 - arr[i] << ' ';
        else if (i < 5)
            cout << 2 - arr[i] << ' ';
        else
            cout << 8 - arr[i] << ' ';
    }
}