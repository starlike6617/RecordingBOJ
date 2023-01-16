#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N;
    cin >> N;

    int A[N];
    for (int i = 0; i < N; i++)
        cin >> A[i];

    int B, C;
    cin >> B >> C;

    long long cnt = N;
    for (int i : A)
    {
        i -= B;
        if (i > 0)
            cnt += (i / C == (double)i / C ? i / C : i / C + 1);
    }

    cout << cnt;
}