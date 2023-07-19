#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[7];
    for (int i = 6; i >= 0; i--)
    {
        arr[i] = n % 10;
        n /= 10;
    }

    int sum = arr[0] * 2;
    for (int i = 1; i < 7; i++)
    {
        sum += arr[i] * (8 - i);
    }

    int res = sum % 11;
    if (res == 0)
    {
        cout << 'J';
    }
    else if (res == 10)
    {
        cout << 'Z';
    }
    else
    {
        cout << (char)(res - 1 + 'A');
    }
}