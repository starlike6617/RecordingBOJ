#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int col, row;
        cin >> col >> row;

        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
                cout << 'X';
            cout << endl;
        }
        cout << endl;
    }
}