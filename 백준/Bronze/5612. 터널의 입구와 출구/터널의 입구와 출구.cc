#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    bool isMinus = false;
    int maxM = m;

    while (n--)
    {
        int a, b;
        cin >> a >> b;

        m = m + a - b;
        maxM = max(maxM, m);

        if (m < 0)
        {
            isMinus = true;
        }
    }

    cout << (isMinus ? 0 : maxM);
}