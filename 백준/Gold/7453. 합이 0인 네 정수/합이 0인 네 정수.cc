#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    int arr[4][n];
    for (int j = 0; j < n; j++)
    {
        for (int i = 0; i < 4; i++)
        {
            cin >> arr[i][j];
        }
    }

    // O(n * n + n^2 * log n^2 * 2) = O(n^2 * log n)
    vector<int> sumAB, sumCD;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            sumAB.push_back(arr[0][i] + arr[1][j]);
            sumCD.push_back(arr[2][i] + arr[3][j]);
        }
    }

    sort(sumAB.begin(), sumAB.end());
    sort(sumCD.begin(), sumCD.end());

    long long cnt = 0;
    for (int i : sumAB)
    {
        int start = lower_bound(sumCD.begin(), sumCD.end(), -i) - sumCD.begin();
        int end = upper_bound(sumCD.begin(), sumCD.end(), -i) - sumCD.begin();

        cnt += end - start;
    }

    cout << cnt;
}