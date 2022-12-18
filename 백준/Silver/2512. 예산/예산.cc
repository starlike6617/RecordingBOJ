#include <iostream>
#include <vector>
using namespace std;

bool condition(int a, vector<int> vec, int b)
{
    int total = 0;
    for (int i : vec)
        total += (i < a ? i : a);

    if (total <= b)
        return true;
    return false;
}

int main()
{
    int n, m, max = 0;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        if (max < v[i])
            max = v[i];
    }
    cin >> m;

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