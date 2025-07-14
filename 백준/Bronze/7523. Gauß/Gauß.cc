#include <iostream>
#define endl '\n'
using namespace std;

int main()
{
    int T;
    cin >> T;

    for (int i = 1; i <= T; i++)
    {
        long long n, m;
        cin >> n >> m;

        cout << "Scenario #" << i << ":" << endl;
        cout << (n + m) * (m - n + 1) / 2 << endl;
        cout << endl;
    }
}