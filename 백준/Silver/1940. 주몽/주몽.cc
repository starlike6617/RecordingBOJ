#include <iostream>
#include <vector>
#include <algorithm>
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

    int left = 0, right = N - 1;
    int cnt = 0;

    while (left < right)
    {
        int sum = v[left] + v[right];

        if (sum == M)
        {
            cnt++;
            left++;
        }
        else if (sum < M)
        {
            left++;
        }
        else
        {
            right--;
        }
    }

    cout << cnt;
}