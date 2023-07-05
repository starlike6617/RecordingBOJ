#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int arr[5];
        for (int i = 0; i < 5; i++)
            cin >> arr[i];

        double sum = 0;
        double price[5] = {350.34, 230.90, 190.55, 125.30, 180.90};

        for (int i = 0; i < 5; i++)
            sum += arr[i] * price[i];

        cout << fixed;
        cout.precision(2);
        cout << '$' << sum << endl;
    }
}