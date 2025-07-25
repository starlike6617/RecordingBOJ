#include <iostream>
#include <vector>
#include <algorithm>
#define endl '\n'
using namespace std;

bool cmp(int a, int b)
{
    if (abs(a) == abs(b))
    {
        return a > b;
    }
    return abs(a) < abs(b);
}

int main()
{
    int sum = 0;
    vector<int> v(10);

    for (int i = 0; i < 10; i++)
    {
        int n;
        cin >> n;

        sum += n;
        v[i] = sum - 100;
    }

    sort(v.begin(), v.end(), cmp);

    cout << v[0] + 100;
}