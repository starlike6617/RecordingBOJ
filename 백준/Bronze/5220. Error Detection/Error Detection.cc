#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, m;
        cin >> n >> m;

        int cnt = 0;
        while (n)
        {
            if (n % 2 == 1)
                cnt++;
            n /= 2;
        }

        if ((cnt % 2 == 0 && m == 0) || (cnt % 2 == 1 && m == 1))
            cout << "Valid" << endl;
        else
            cout << "Corrupt" << endl;
    }
}