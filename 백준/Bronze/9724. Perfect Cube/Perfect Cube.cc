#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T;
    cin >> T;

    for (int i = 1; i <= T; i++)
    {
        long long A, B;
        cin >> A >> B;

        int cnt = 0;
        for (long long j = 1; j < 1300; j++)
        {
            if (A <= j * j * j && j * j * j <= B)
            {
                cnt++;
            }
        }
        cout << "Case #" << i << ": " << cnt << '\n';
    }
}