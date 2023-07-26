#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N;

    int h[N];
    for (int i = 0; i < N; i++)
    {
        cin >> h[i];
    }

    int maxH = 0;
    int cnt = 1;

    for (int i = N - 1; i > 0; i--)
    {
        maxH = max(maxH, h[i]);

        if (h[i - 1] > maxH)
        {
            cnt++;
        }
    }

    cout << cnt;
}