#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        int factor1[2501] = {}, sum1 = 0;
        for (int i = 1; i <= n / 2; i++)
            if (n % i == 0)
            {
                factor1[i] = 1;
                sum1 += i;
            }

        bool res = true;
        if (n < sum1)
        {
            for (int i = 1; i <= n / 2; i++)
                if (factor1[i])
                {
                    int sum2 = 0;
                    for (int j = 1; j <= i / 2; j++)
                        if (i % j == 0)
                            sum2 += j;

                    if (i < sum2)
                    {
                        cout << "BOJ 2022" << '\n';
                        res = false;
                        break;
                    }
                }

            if (res)
            {
                cout << "Good Bye" << '\n';
                continue;
            }
        }
        else
        {
            cout << "BOJ 2022" << '\n';
            continue;
        }
    }
}