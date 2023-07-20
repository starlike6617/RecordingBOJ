#include <iostream>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int d;
        cin >> d;

        int res;
        for (int i = 0; i < d; i++)
        {
            if (i + i * i <= d)
            {
                res = i;
            }
            else
            {
                break;
            }
        }
        cout << res << endl;
    }
}