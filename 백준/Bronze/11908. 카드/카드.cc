#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int c[n];
    for (int i = 0; i < n; i++)
    {
        cin >> c[i];
    }

    sort(c, c + n);

    int sum = 0;
    for (int i = 0; i < n - 1; i++)
    {
        sum += c[i];
    }
    cout << sum;
}