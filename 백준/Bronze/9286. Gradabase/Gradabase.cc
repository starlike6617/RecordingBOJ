#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        int m;
        cin >> m;

        cout << "Case " << i << ":" << '\n';
        while (m--)
        {
            int num;
            cin >> num;

            if (num != 6)
            {
                cout << num + 1 << '\n';
            }
        }
    }
}