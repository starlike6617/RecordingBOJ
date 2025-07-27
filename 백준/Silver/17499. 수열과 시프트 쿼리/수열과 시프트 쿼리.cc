#include <iostream>
#include <vector>
#include <algorithm>
#define endl '\n'
using namespace std;

int main()
{
    int N, Q;
    cin >> N >> Q;

    vector<int> v(N);
    for (int i = 0; i < N; i++)
    {
        cin >> v[i];
    }

    int start = 0;
    while (Q--)
    {
        int exp;
        cin >> exp;

        if (exp == 1)
        {
            int i, x;
            cin >> i >> x;

            v[(start + i - 1) % N] += x;
        }
        else if (exp == 2)
        {
            int s;
            cin >> s;

            start += N - s;
        }
        else
        {
            int s;
            cin >> s;

            start += s;
        }

        start %= N;
    }

    for (int i = 0; i < N; i++)
    {
        cout << v[(start + i) % N] << ' ';
    }
}