#include <iostream>
#include <vector>
#include <algorithm>
#define budget 5000000
using namespace std;

long long power(long long base, int exp)
{
    long long res = 1;
    for (int i = 0; i < exp; i++)
    {
        res *= base;
    }
    return res;
}

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        vector<long long> v;
        while (true)
        {
            long long L;
            cin >> L;

            if (L == 0)
            {
                break;
            }

            v.push_back(L);
        }

        sort(v.begin(), v.end(), greater<long long>());

        long long sum = 0;
        for (int i = 0; i < v.size(); i++)
        {
            sum += 2 * power(v[i], i + 1);
            if (sum > budget)
            {
                cout << "Too expensive" << endl;
                break;
            }
        }

        if (sum <= budget)
        {
            cout << sum << endl;
        }
    }
}