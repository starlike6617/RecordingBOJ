#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        int idx;
        cin >> idx;
        arr[idx - 1] = i + 1;
    }

    for (int i : arr)
    {
        cout << i << endl;
    }
}