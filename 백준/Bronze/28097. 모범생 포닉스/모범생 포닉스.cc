#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    int res = (N - 1) * 8;
    while (N--)
    {
        int T;
        cin >> T;
        res += T;
    }

    cout << res / 24 << ' ' << res % 24;
}