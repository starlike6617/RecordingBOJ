#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int N, K;
    cin >> N >> K;

    vector<pair<int, int>> v(N);
    for (int i = 0; i < N; i++)
    {
        cin >> v[i].first >> v[i].second;
    }

    int res = 200001;
    if (K == 1)
    {
        for (int i = 0; i < N; i++)
        {
            int maxDist = 0;
            for (int j = 0; j < N; j++)
            {
                int dist = abs(v[j].first - v[i].first) + abs(v[j].second - v[i].second);
                maxDist = max(maxDist, dist);
            }
            res = min(res, maxDist);
        }
    }
    else if (K == 2)
    {
        for (int i = 0; i < N; i++)
        {
            for (int j = i + 1; j < N; j++)
            {
                int maxDist = 0;
                for (int k = 0; k < N; k++)
                {
                    int dist1 = abs(v[k].first - v[i].first) + abs(v[k].second - v[i].second);
                    int dist2 = abs(v[k].first - v[j].first) + abs(v[k].second - v[j].second);
                    maxDist = max(maxDist, min(dist1, dist2));
                }
                res = min(res, maxDist);
            }
        }
    }
    else
    {
        for (int i = 0; i < N; i++)
        {
            for (int j = i + 1; j < N; j++)
            {
                for (int k = j + 1; k < N; k++)
                {
                    int maxDist = 0;
                    for (int l = 0; l < N; l++)
                    {
                        int dist1 = abs(v[l].first - v[i].first) + abs(v[l].second - v[i].second);
                        int dist2 = abs(v[l].first - v[j].first) + abs(v[l].second - v[j].second);
                        int dist3 = abs(v[l].first - v[k].first) + abs(v[l].second - v[k].second);
                        maxDist = max(maxDist, min(dist1, min(dist2, dist3)));
                    }
                    res = min(res, maxDist);
                }
            }
        }
    }

    cout << res;
}