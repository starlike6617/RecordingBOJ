#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int N, M, L;
    cin >> N >> M >> L;

    vector<int> v(N);
    v = {1, };
    int idx = 0;
    int cnt = 0;

    while (v[idx] < M)
    {
        if (v[idx] % 2 == 0)
        {
            idx = (idx - L + N) % N;
        }
        else
        {
            idx = (idx + L + N) % N;
        }

        v[idx]++;
        cnt++;
    }

    cout << cnt;
}