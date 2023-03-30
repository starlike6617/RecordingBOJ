#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    int x[N], y[N], cnt[N] = {};
    for (int i = 0; i < N; i++)
        cin >> x[i] >> y[i];

    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            if (x[i] < x[j] && y[i] < y[j])
                cnt[i]++;

    for (int i = 0; i < N; i++)
        cout << cnt[i] + 1 << ' ';
}