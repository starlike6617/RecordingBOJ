#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int N;
    cin >> N;

    int a[N];
    for (int i = 0; i < N; i++)
    {
        cin >> a[i];
    }

    sort(a, a + N);

    int cnt = 1;
    int res = 1;

    for (int i = 0; i < N - 1; i++)
    {
        if (a[i] == a[i + 1])
        {
            cnt++;
        }
        else
        {
            cnt = 1;
        }
        res = max(res, cnt);
    }

    cout << res;
}