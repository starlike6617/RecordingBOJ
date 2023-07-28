#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;

    int h[N];
    for (int i = 0; i < N; i++)
    {
        cin >> h[i];
    }

    int a[M];
    for (int i = 0; i < M; i++)
    {
        cin >> a[i];
    }

    sort(h, h + N);
    sort(a, a + M);

    cout << h[N - 1] + a[M - 1] << endl;
}