#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 2; i < n; i++)
    {
        if (n % i != 0)
        {
            cout << i << ' ';
            break;
        }
    }
    for (int i = n - 1; i > 1; i--)
    {
        if (n % i != 0)
        {
            cout << i;
            break;
        }
    }
}