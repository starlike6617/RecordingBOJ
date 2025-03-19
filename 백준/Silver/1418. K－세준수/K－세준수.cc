#include <iostream>
#define endl '\n'
using namespace std;

int main()
{
    int N, K;
    cin >> N >> K;

    int cnt = 0;
    for (int i = 1; i <= N; i++)
    {
        int n = i;
        for (int j = 2; j <= K; j++)
        {
            while (n % j == 0)
            {
                n /= j;
            }
        }

        if (n == 1)
        {
            cnt++;
        }
    }

    cout << cnt;
}