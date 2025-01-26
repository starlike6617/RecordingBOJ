#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int N;
    cin >> N;

    vector<int> v(N);
    for (int i = 0; i < N; i++)
    {
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    int res = 4;
    for (int i = 0; i < N; i++)
    {
        int cnt = 4;
        for (int j = i + 1; j <= i + 4 && j < N; j++)
        {
            if (v[j] - v[i] < 5)
            {
                cnt--;
            }
        }

        res = min(res, cnt);
    }

    cout << res;
}