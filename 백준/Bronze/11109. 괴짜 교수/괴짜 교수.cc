#include <iostream>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int d, n, s, p;
        cin >> d >> n >> s >> p;

        int res1 = d + n * p;
        int res2 = n * s;

        if (res1 > res2)
        {
            cout << "do not parallelize" << endl;
        }
        else if (res1 < res2)
        {
            cout << "parallelize" << endl;
        }
        else
        {
            cout << "does not matter" << endl;
        }
    }
}