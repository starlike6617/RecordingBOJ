#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int v[n], sum = 0, maxV = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        sum += v[i];
        maxV = max(maxV, v[i]);
    }
    cout << sum - maxV;
}