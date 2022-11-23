#include <iostream>
using namespace std;

int main()
{
    int t, n;
    double sum = 0;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        cin >> n;

        if (n % 10 == 0 || n % 10 == 6 || n % 10 == 9)
            n = (n / 10) * 10 + 9;
        if ((n > 100 && (n / 10 % 10 == 0)) || n / 10 % 10 == 6 || n / 10 % 10 == 9)
            n = (n / 100) * 100 + n % 10 + 90;
        if (n > 100)
            n = 100;

        sum += n;
    }

    cout << (int)(sum / t + 0.5);
}