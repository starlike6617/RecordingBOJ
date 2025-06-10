#include <iostream>
using namespace std;

int main()
{
    int N, P;
    cin >> N >> P;

    int res = P;
    if (N >= 5)
    {
        res = min(res, max(0, P - 500));
    }
    if (N >= 10)
    {
        res = min(res, max(0, P / 100 * 90));
    }
    if (N >= 15)
    {
        res = min(res, max(0, P - 2000));
    }
    if (N >= 20)
    {
        res = min(res, max(0, P / 100 * 75));
    }

    cout << res;
}