#include <iostream>
#include <vector>
#include <algorithm>
#define endl '\n'
using namespace std;

int main()
{
    int N, D, p;
    cin >> N >> D >> p;

    vector<int> A(N);
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }

    int cnt = 0;
    for (int i = 0; i < N; i++)
    {
        // 이미 오버킬이면 패스
        if (A[i] <= 0)
        {
            continue;
        }

        while (A[i] > 0)
        {
            A[i] -= D;
            cnt++;
        }

        // 오버킬이면서 마지막이 아닐 때
        if (A[i] < 0 && i < N - 1)
        {
            double over = (double)A[i] * p / 100;
            A[i + 1] += (int)over; // 음수이므로 더해줌
        }
    }

    cout << cnt;
}