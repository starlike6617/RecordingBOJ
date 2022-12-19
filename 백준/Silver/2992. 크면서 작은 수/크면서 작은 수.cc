#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    string n;
    cin >> n;

    int arr[n.size()];
    for (int i = 0; i < n.size(); i++)
        arr[i] = (int)(n[i]) - '0';

    if (next_permutation(arr, arr + n.size()))
        for (int i = 0; i < n.size(); i++)
            cout << arr[i];
    else
        cout << 0;
}