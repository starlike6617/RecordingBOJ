#include <iostream>
#define endl '\n'
using namespace std;

int main()
{
    int N;
    cin >> N;

    int cnt = 0;
    while (N--)
    {
        int n;
        cin >> n;

        if (n == 1)
        {
            continue;
        }

        bool isPrime = true;
        for (int i = 2; i < n; i++)
        {
            if (n % i == 0)
            {
                isPrime = false;
                break;
            }
        }

        if (isPrime)
        {
            cnt++;
        }
    }

    cout << cnt;
}