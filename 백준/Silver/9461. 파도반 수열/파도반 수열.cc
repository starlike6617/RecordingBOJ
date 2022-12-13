#include <iostream>
using namespace std;

long long padovan(int a)
{
    long long arr[101];
    arr[1] = 1, arr[2] = 1, arr[3] = 1;
    for (int i = 4; i <= a; i++)
        arr[i] = arr[i - 2] + arr[i - 3];
    return arr[a];
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        cout << padovan(n) << endl;
    }
}