#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

vector<int> prime;

void getPrime()
{
    int num[104] = {};

    for (int i = 2; i <= sqrt(103); i++)
        if (num[i] == 0)
            for (int j = i + i; j <= 103; j += i)
                num[j] = 1;

    for (int i = 2; i <= 103; i++)
        if (!num[i])
            prime.push_back(i);
}

int main()
{
    getPrime();

    int res[prime.size() - 1];
    for (int i = 0; i < prime.size() - 1; i++)
        res[i] = prime[i] * prime[i + 1];

    int n;
    cin >> n;

    for (int i = 0; i < prime.size(); i++)
        if (n < res[i])
        {
            cout << res[i];
            break;
        }
}