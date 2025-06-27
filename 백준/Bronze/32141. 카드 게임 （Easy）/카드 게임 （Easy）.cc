#include <iostream>
#include <vector>
#define endl '\n'
using namespace std;

int main()
{
    int N, H;
    cin >> N >> H;

    vector<int> d(N);
    for (int i = 0; i < N; i++)
    {
        cin >> d[i];
    }

    int cnt = 0;
    while (H > 0)
    {
        if (cnt == N)
        {
            cnt = -1;
            break;
        }

        H -= d[cnt];
        cnt++;
    }

    cout << cnt;
}