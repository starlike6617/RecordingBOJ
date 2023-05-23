#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    while (n--)
    {
        int arr[10];
        for (int i = 0; i < 10; i++)
            cin >> arr[i];

        bool isMack = false;
        bool isZack = false;

        for (int i : arr)
        {
            cout << i << ' ';
            if (i == 18)
                isMack = true;
            if (i == 17)
                isZack = true;
        }
        cout << endl;

        if (isMack && isZack)
            cout << "both" << endl;
        else if (isMack)
            cout << "mack" << endl;
        else if (isZack)
            cout << "zack" << endl;
        else
            cout << "none" << endl;
        cout << endl;
    }
}