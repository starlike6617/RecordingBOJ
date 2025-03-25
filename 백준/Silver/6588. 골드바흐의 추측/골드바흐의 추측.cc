#include <iostream>
#include <vector>
#include <algorithm>
#define endl '\n'
using namespace std;

vector<bool> isOddPrime(1000000, true);
vector<int> oddPrime;

void makePrime()
{
    for (int i = 2; i * i < 1000000; i++)
    {
        if (isOddPrime[i])
        {
            for (int j = i * i; j < 1000000; j += i)
            {
                isOddPrime[j] = false;
            }
        }
    }
    isOddPrime[2] = false;

    for (int i = 3; i < 1000000; i++)
    {
        if (isOddPrime[i])
        {
            oddPrime.push_back(i);
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    makePrime();

    while (true)
    {
        int n;
        cin >> n;

        if (n == 0)
        {
            break;
        }

        for (int i : oddPrime)
        {
            if (isOddPrime[n - i])
            {
                cout << n << " = " << i << " + " << n - i << endl;
                break;
            }
        }
    }
}