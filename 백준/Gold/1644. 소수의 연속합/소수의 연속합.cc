#include <iostream>
#include <vector>
using namespace std;

vector<bool> sieve(int n)
{
    vector<bool> isPrime(n + 1, true);

    isPrime[0] = false;
    isPrime[1] = false;

    for (int i = 2; i * i <= n; i++)
    {
        if (isPrime[i])
        {
            for (int j = i * i; j <= n; j += i)
            {
                isPrime[j] = false;
            }
        }
    }

    return isPrime;
}

int main()
{
    int N;
    cin >> N;

    if (N == 1)
    {
        cout << 0;
        return 0;
    }

    vector<bool> isPrime = sieve(N);
    vector<int> prime;
    vector<long long> accSum;

    long long sum = 0;
    for (int i = 2; i <= N; i++)
    {
        if (isPrime[i])
        {
            prime.push_back(i);
            sum += i;
            accSum.push_back(sum);
        }
    }

    int cnt = 0;
    int left = 0, right = 0;

    while (left <= right && right <= accSum.size())
    {
        int secSum = accSum[right] - (left == 0 ? 0 : accSum[left - 1]);

        if (secSum == N)
        {
            cnt++;
            right++;
        }
        else if (secSum < N)
        {
            right++;
        }
        else
        {
            left++;
        }
    }

    cout << cnt;
}