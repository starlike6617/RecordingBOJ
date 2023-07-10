#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    for (int i = 1; i <= t; i++)
    {
        long long n, m;
        cin >> n >> m;

        cout << "Scenario #" << i << ":" << endl;
        cout << (m - n + 1) * (m + n) / 2 << endl
             << endl;
    }
}