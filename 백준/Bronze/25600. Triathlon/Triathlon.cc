#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    int res = 0;
    while (N--)
    {
        int a, d, g;
        cin >> a >> d >> g;

        int score = a * (d + g);
        if (a == d + g)
            score *= 2;

        res = max(res, score);
    }

    cout << res;
}