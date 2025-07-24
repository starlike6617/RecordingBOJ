#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int N;
    cin >> N;

    int prev = 0;
    long long cnt = 0;
    vector<long long> v;

    while (N--)
    {
        int A;
        cin >> A;

        if (prev < A)
        {
            cnt++;
        }
        else
        {
            v.push_back(cnt);
            cnt = 1;
        }

        prev = A;
    }

    v.push_back(cnt);

    long long res = 0;
    for (long long i : v)
    {
        res += i * (i + 1) / 2;
    }

    cout << res;
}