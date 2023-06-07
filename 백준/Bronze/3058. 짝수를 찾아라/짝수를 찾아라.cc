#include <iostream>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int arr[7];
        for (int i = 0; i < 7; i++)
            cin >> arr[i];

        int sum = 0, minEven = 100;
        for (int i : arr)
        {
            if (i % 2 == 0)
            {
                sum += i;
                minEven = min(minEven, i);
            }
        }

        cout << sum << ' ' << minEven << endl;
    }
}