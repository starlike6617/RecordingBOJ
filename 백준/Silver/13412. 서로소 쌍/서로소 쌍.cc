#include <iostream>
#define endl '\n'
using namespace std;

int gcd(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    return gcd(b, a % b);
}

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int N;
        cin >> N;

        int cnt = 0;
        for (int i = 1; i * i <= N; i++)
        {
            if (N % i == 0 && gcd(i, N / i) == 1)
            {
                cnt++;
            }
        }

        cout << cnt << endl;
    }
}