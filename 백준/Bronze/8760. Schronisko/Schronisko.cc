#include <iostream>
using namespace std;

int main()
{
    int Z;
    cin >> Z;

    while (Z--)
    {
        int W, K;
        cin >> W >> K;

        if (W % 2 == 1 && K % 2 == 1)
            cout << (W * K - 1) / 2 << endl;
        else
            cout << W * K / 2 << endl;
    }
}