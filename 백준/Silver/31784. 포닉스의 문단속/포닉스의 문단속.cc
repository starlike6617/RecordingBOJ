#include <iostream>
using namespace std;

int main()
{
    int N, K;
    string s;
    cin >> N >> K >> s;

    for (int i = 0; i < N; i++)
    {
        int cnt = 'Z' + 1 - s[i];

        if (i == N - 1)
        {
            s[i] = (char)('A' + (s[i] - 'A' + K) % 26);
            K = 0;
        }
        else if (s[i] == 'A')
        {
            continue;
        }
        else if (K >= cnt)
        {
            s[i] = 'A';
            K -= cnt;
        }

        if (K == 0)
        {
            break;
        }
    }

    cout << s;
}