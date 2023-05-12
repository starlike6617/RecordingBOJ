#include <iostream>
using namespace std;

int phi(int n)
{
    int res = n;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            res -= res / i;
            while (n % i == 0)
                n /= i;
        }
    }

    if (n > 1)
        res -= res / n;

    return res;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int sum[10001];
    sum[0] = 1;

    for (int i = 1; i < 10001; i++)
        sum[i] = sum[i - 1] + phi(i);

    int t;
    cin >> t;

    while (t--)
    {
        int N;
        cin >> N;
        cout << sum[N] << '\n';
    }
}