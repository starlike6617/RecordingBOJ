#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int N;
    cin >> N;

    int res = 0;
    for (int i = 2; i <= N; i++)
    {
        int phi = i;
        int temp = i;

        for (int j = 2; j <= sqrt(temp); j++)
        {
            if (temp % j == 0)
            {
                phi = phi / j * (j - 1);
                while (temp % j == 0)
                    temp /= j;
            }
        }

        if (temp > 1)
            phi = phi / temp * (temp - 1);

        res += phi;
    }

    cout << res;
}