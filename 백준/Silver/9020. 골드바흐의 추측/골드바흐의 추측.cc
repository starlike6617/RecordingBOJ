#include <iostream>
#include <vector>
#define endl '\n'
using namespace std;

int main()
{
    vector<bool> isPrime(10001, true);

    isPrime[0] = isPrime[1] = false;
    for (int i = 2; i * i <= 10000; i++)
    {
        for (int j = i * i; j <= 10000; j += i)
        {
            isPrime[j] = false;
        }
    }

    int T;
    cin >> T;

    while (T--)
    {
        int n;
        cin >> n;

        int left = n / 2;
        int right = n / 2;

        while (2 <= left)
        {
            if (isPrime[left] && isPrime[right])
            {
                cout << left << ' ' << right << endl;
                break;
            }

            left--;
            right++;
        }
    }
}