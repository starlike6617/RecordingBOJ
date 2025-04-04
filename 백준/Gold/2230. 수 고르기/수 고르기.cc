#include <iostream>
#include <vector>
#include <algorithm>
#define endl '\n'
using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;

    vector<int> v(N);
    for (int i = 0; i < N; i++)
    {
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    int left = 0, right = 0;
    int minGap = 2147483647;

    while (left <= right && right < N)
    {
        int gap = v[right] - v[left];

        if (gap < M)
        {
            right++;
        }
        else if (gap < minGap)
        {
            minGap = gap;
            left++;
        }
        else
        {
            left++;
        }
    }

    cout << minGap;
}