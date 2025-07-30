#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, M;
    cin >> N >> M;

    int sum = 0;
    unordered_map<int, long long> mod;
    mod[0]++;

    for (int i = 0; i < N; i++)
    {
        int A;
        cin >> A;

        sum += A;
        mod[sum % M]++;

        sum %= M;
    }

    // mod: [0] 1 0 0 1 0
    long long res = 0;
    for (auto it : mod)
    {
        if (it.second > 1)
        {
            res += it.second * (it.second - 1) / 2;
        }
    }

    cout << res;
}