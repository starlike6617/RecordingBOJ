#include <bits/stdc++.h>
#define endl '\n'
#define MAX 1048575
using namespace std;

int main()
{
    while (true)
    {
        long long A;
        cin >> A;

        if (A == 0)
        {
            break;
        }

        long long a = A * A;
        int cnt = 0;
        for (long long i = 1; i <= sqrt(a); i++)
        {
            if (a % i == 0)
            {
                long long x1 = a / i;
                long long x2 = i;

                if ((x1 % 2) == (x2 % 2) && A < (x1 - x2) / 2)
                {
                    cnt++;
                }
            }
        }
        cout << cnt << endl;
    }
}