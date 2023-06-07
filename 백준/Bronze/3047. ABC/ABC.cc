#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int arr[3];
    for (int i = 0; i < 3; i++)
        cin >> arr[i];
    sort(arr, arr + 3);

    string s;
    cin >> s;

    for (char c : s)
    {
        if (c == 'A')
            cout << arr[0] << ' ';
        else if (c == 'B')
            cout << arr[1] << ' ';
        else
            cout << arr[2] << ' ';
    }
}