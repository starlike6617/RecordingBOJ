#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int N, S;
    cin >> N >> S;

    vector<int> v(N);
    for (int i = 0; i < N; i++)
    {
        cin >> v[i];
    }

    int cnt = 0;
    for (int bits = 1; bits < (1 << N); bits++)
    {
        int res = 0;
        for (int i = 0; i < N; i++)
        {
            if (bits & (1 << i))
            {
                res += v[i];
            }
        }

        if (res == S)
        {
            cnt++;
        }
    }

    cout << cnt;
}