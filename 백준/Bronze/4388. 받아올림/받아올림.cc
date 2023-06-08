#include <iostream>
using namespace std;

int main()
{
    while (true)
    {
        int a, b;
        cin >> a >> b;

        if (a == 0 && b == 0)
            break;

        int carry = 0;
        int cnt = 0;

        while (a > 0 || b > 0)
        {
            int sum = a % 10 + b % 10 + carry;
            if (sum >= 10)
            {
                carry = 1;
                cnt++;
            }
            else
                carry = 0;

            a /= 10;
            b /= 10;
        }

        cout << cnt << endl;
    }
}