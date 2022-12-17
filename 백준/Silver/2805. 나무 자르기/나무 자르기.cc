#include <iostream>
#include <vector>
using namespace std;

bool condition(int middle, vector<int> vec, int num)
{
    long long total = 0;
    for (int i : vec)
        if (i > middle)
            total += i - middle;

    if (total >= num)
        return true;
    return false;
}

int main()
{
    int n, m;
    cin >> n >> m;

    int max = 0;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        if (max < v[i])
            max = v[i];
    }

    int start = 1, end = max, mid, res;
    while (start <= end)
    {
        mid = (start + end) / 2;
        if (condition(mid, v, m))
        {
            res = mid;
            start = mid + 1;
        }
        else
            end = mid - 1;
    }

    cout << res;
}