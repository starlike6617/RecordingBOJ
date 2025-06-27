#include <iostream>
using namespace std;

int main()
{
    int S, N, M;
    cin >> S >> N >> M;

    int cnt = 0;
    for (int i = 0; i < N + M; i++)
    {
        int exp;
        cin >> exp;

        if (exp == 0)
        {
            cnt--;
        }
        else if (cnt < S)
        {
            cnt++;
        }
        else
        {
            cnt++;
            S *= 2;
        }
    }

    cout << S;
}