#include <iostream>
using namespace std;

int main()
{
    int sum = 0, minOdd = 100;
    bool isOdd = false;

    int arr[7];
    for (int i = 0; i < 7; i++)
    {
        cin >> arr[i];
        if (arr[i] % 2 == 1)
            isOdd = true;
    }

    for (int i : arr)
        if (i % 2 == 1)
        {
            sum += i;
            minOdd = min(minOdd, i);
        }

    if (isOdd)
        cout << sum << endl
             << minOdd;
    else
        cout << -1;
}