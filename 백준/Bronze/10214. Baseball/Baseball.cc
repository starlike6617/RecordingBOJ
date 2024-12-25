#include <iostream>
#define endl '\n'
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int Y = 0, K = 0;
        for (int i = 0; i < 9; i++)
        {
            int a, b;
            cin >> a >> b;

            Y += a;
            K += b;
        }

        if (Y > K)
        {
            cout << "Yonsei" << endl;
        }
        else if (Y < K)
        {
            cout << "Korea" << endl;
        }
        else
        {
            cout << "Draw" << endl;
        }
    }
}