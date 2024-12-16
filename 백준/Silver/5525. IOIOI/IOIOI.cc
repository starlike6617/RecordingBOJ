#include <iostream>
#include <vector>
#include <algorithm>
#define endl '\n'
using namespace std;

int main()
{
    int N, M;
    string S;
    cin >> N >> M >> S;

    int cnt = 0;
    vector<int> v;
    bool isStart = false;

    for (int i = 0; i < M; i++)
    {
        if (!isStart && S[i] == 'I')
        {
            isStart = true;
        }

        if (isStart)
        {
            if (i + 2 < M && S.substr(i + 1, 2) == "OI")
            {
                cnt++;
                i++;
            }
            else
            {
                v.push_back(cnt);
                cnt = 0;
                isStart = false;
            }
        }
    }

    int res = 0;
    for (int i : v)
    {
        res += max(0, i - N + 1);
    }

    cout << res;
}