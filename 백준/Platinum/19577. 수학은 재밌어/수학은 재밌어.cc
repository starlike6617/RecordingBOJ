#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int phi(int num)
{
    int res = num;
    for (int i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
        {
            res = res / i * (i - 1);
            while (num % i == 0)
                num /= i;
        }
    }

    if (num > 1)
        res = res / num * (num - 1);

    return res;
}

int main()
{
    int n;
    cin >> n;

    vector<int> v;
    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
            v.push_back(i);
        if (i * i != n)
            v.push_back(n / i);
    }
    sort(v.begin(), v.end());

    bool isFound = false;
    for (int i : v)
    {
        if (i * phi(i) == n)
        {
            isFound = true;
            cout << i;
            break;
        }
    }

    if (!isFound)
        cout << -1;
}