#include <iostream>
using namespace std;

int main()
{
    int N, K;
    cin >> N >> K;

    int cnt = 0;
    for (int i = 1; i <= N; i++)
    {
        if (N % i == 0)
            cnt++;

        if (cnt == K)
        {
            cout << i;
            break;
        }
        else if (cnt < K && i == N)
            cout << 0;
    }
}