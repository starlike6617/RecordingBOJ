#include <iostream>
#include <vector>
#define endl '\n'
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;

    while (T--)
    {
        string W;
        int K;
        cin >> W >> K;

        vector<int> v(26);
        for (int i = 0; i < W.size(); i++)
        {
            v[W[i] - 'a']++;
        }

        int minV = 10001;
        int maxV = -1;
        for (int i = 0; i < W.size(); i++)
        {
            if (v[W[i] - 'a'] < K)
            {
                continue;
            }

            int cnt = 0;
            for (int j = i; j < W.size(); j++)
            {
                if (W[i] == W[j])
                {
                    cnt++;
                }

                if (cnt == K)
                {
                    minV = min(minV, j - i + 1);
                    maxV = max(maxV, j - i + 1);
                    break;
                }
            }
        }

        if (minV == 10001 || maxV == -1)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << minV << ' ' << maxV << endl;
        }
    }
}