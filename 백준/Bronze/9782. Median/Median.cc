#include <iostream>
using namespace std;

int main()
{
    for (int i = 1;; i++)
    {
        int n;
        cin >> n;

        if (n == 0)
            break;

        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        cout << fixed;
        cout.precision(1);

        cout << "Case " << i << ": ";

        if (n % 2 == 1)
            cout << (double)arr[(n + 1) / 2 - 1];
        else
            cout << (double)(arr[n / 2 - 1] + arr[n / 2]) / 2;
        cout << endl;
    }
}