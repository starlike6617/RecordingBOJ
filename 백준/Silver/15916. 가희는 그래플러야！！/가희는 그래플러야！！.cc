#include <iostream>
#include <vector>
#define endl '\n'
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> v(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
    }

    long long k;
    cin >> k;

    bool isAbove = true;
    if (k == v[1])
    {
        cout << 'T';
        return 0;
    }
    else if (k < v[1])
    {
        isAbove = false;
    }

    // y=kx가 계속 크거나 or 계속 작거나
    bool isIntersect = false;
    for (int i = 2; i <= n; i++)
    {
        if ((isAbove && k * i <= v[i]) || (!isAbove && k * i >= v[i]))
        {
            isIntersect = true;
        }
    }

    cout << (isIntersect ? 'T' : 'F');
}