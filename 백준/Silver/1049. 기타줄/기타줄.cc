#include <iostream>
using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;

    int set[M], unit[M];
    int minSet = 1000, minUnit = 1000;

    for (int i = 0; i < M; i++)
    {
        cin >> set[i] >> unit[i];
        minSet = min(minSet, set[i]);
        minUnit = min(minUnit, unit[i]);
    }

    int res = 0;
    while (N > 0)
    {
        if (N >= 6)
        {
            if (minSet < minUnit * 6)
                res += minSet;
            else
                res += minUnit * 6;
            N -= 6;
        }
        else
        {
            if (minSet < minUnit * N)
                res += minSet;
            else
                res += minUnit * N;
            N = 0;
        }
    }

    cout << res;
}