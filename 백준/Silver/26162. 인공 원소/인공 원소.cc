#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> prime;
    for (int i = 2; i < 118; i++)
    {
        bool isPrime = true;
        for (int j = 2; j < i; j++)
            if (i % j == 0)
            {
                isPrime = false;
                break;
            }
        if (isPrime)
            prime.push_back(i);
    }

    int N;
    cin >> N;

    while (N--)
    {
        int a;
        cin >> a;

        bool isYes = false;
        for (int i = 0; i < prime.size(); i++)
            for (int j = 0; j < prime.size(); j++)
                if (prime[i] + prime[j] == a)
                {
                    isYes = true;
                    i = prime.size();
                }
        cout << (isYes ? "Yes" : "No") << endl;
    }
}