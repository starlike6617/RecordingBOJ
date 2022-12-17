#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool condition(long long m, vector<int> vec, int num)
{
    long long total = 0;
    for (int i : vec)
        total += i / m;

    if (total >= num)
        return true;
    return false;
}

int main()
{
    int k, n;
    cin >> k >> n;

    int max = 0;
    vector<int> v(k);
    for (int i = 0; i < k; i++)
    {
        cin >> v[i];
        if (max < v[i])
            max = v[i];
    }

    long long start = 1, end = max, mid, res;
    while (start <= end)
    {
        mid = (start + end) / 2;
        if (condition(mid, v, n))
        {
            res = mid;
            start = mid + 1;
        }
        else
            end = mid - 1;
    }

    cout << res;
}