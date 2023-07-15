#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    for (int tc = 1; tc <= t; tc++)
    {
        int n;
        cin >> n;

        cout << "Case " << tc << ":" << '\n';
        for (int i = 1; i <= 6; i++)
        {
            for (int j = i; j <= 6; j++)
            {
                if (i + j == n)
                {
                    cout << '(' << i << ',' << j << ')' << '\n';
                }
            }
        }
    }
}