#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;

    int H[N];
    for (int i = 0; i < N; i++)
        cin >> H[i];

    int cnt = 1;
    for (int i = 0; i < N - 1; i++)
        if (H[i] <= H[i + 1])
            cnt++;

    cout << cnt;
}