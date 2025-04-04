#include <iostream>
#include <vector>
#include <algorithm>
#define endl '\n'
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int N;
        cin >> N;

        vector<pair<int, int>> v(N);
        for (int i = 0; i < N; i++)
        {
            cin >> v[i].first >> v[i].second;
        }

        sort(v.begin(), v.end());

        int cnt = 1;
        int highRank = v[0].second;

        for (int i = 1; i < N; i++)
        {
            if (v[i].second < highRank)
            {
                cnt++;
                highRank = v[i].second;
            }
        }

        cout << cnt << endl;
    }
}