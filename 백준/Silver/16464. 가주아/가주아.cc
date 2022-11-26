#include <iostream>
using namespace std;

int main()
{
    int n, k;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> k;
        while (k != 1)
        {
            if (k % 2 == 1)
            {
                cout << "Gazua" << endl;
                break;
            }
            k /= 2;
        }
        if (k == 1)
            cout << "GoHanGang" << endl;
    }
}