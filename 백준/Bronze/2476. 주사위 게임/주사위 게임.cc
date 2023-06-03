#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    int res = 0;
    while (N--)
    {
        int a, b, c;
        cin >> a >> b >> c;

        int score = 0;
        if (a == b && b == c)
            score = 10000 + a * 1000;
        else if (a == b || b == c || a == c)
            score = 1000 + (a == b ? a : c) * 100;
        else
            score = max(a, max(b, c)) * 100;

        res = max(res, score);
    }
    cout << res;
}