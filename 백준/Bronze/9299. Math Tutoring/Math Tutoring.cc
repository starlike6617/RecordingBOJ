#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    for (int tc = 1; tc <= t; tc++)
    {
        int n;
        cin >> n;

        int arr[n + 1];
        for (int i = n; i >= 0; i--)
        {
            cin >> arr[i];
            arr[i] *= i;
        }

        cout << "Case " << tc << ": " << n - 1 << ' ';
        for (int i = n; i > 0; i--)
        {
            cout << arr[i] << ' ';
        }
        cout << '\n';
    }
}