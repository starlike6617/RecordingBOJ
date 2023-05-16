#include <iostream>
using namespace std;

int getPisanoPeriod(int m)
{
    int cnt = 1;
    int f1 = 1, f2 = 2;

    while (f1 != 1 || f2 != 1)
    {
        swap(f1, f2);
        f2 = (f1 + f2) % m;
        cnt++;
    }

    return cnt;
}

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int N, M;
        cin >> N >> M;
        cout << N << ' ' << getPisanoPeriod(M) << endl;
    }
}