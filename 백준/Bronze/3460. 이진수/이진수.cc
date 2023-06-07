#include <iostream>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int n;
        cin >> n;

        for (int i = 0; n > 0; i++)
        {
            if (n % 2 == 1)
                cout << i << ' ';
            n /= 2;
        }
    }
}