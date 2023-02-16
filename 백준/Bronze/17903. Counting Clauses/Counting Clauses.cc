#include <iostream>
using namespace std;

int main()
{
    int m, n;
    cin >> m >> n;

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int a;
            cin >> a;
        }
    }

    if (m >= 8)
        cout << "satisfactory";
    else
        cout << "unsatisfactory";
}