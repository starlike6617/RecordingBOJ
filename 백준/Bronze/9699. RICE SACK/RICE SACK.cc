#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    for (int i = 1; i <= t; i++)
    {
        int arr[5];
        for (int i = 0; i < 5; i++)
        {
            cin >> arr[i];
        }

        int res = 0;
        for (int i : arr)
        {
            res = max(res, i);
        }

        cout << "Case #" << i << ": " << res << endl;
    }
}