#include <iostream>
using namespace std;

int main()
{
    int arr[4], x, y, r;
    for (int i = 0; i < 4; i++)
        cin >> arr[i];
    cin >> x >> y >> r;

    for (int i = 0; i < 4; i++)
    {
        if (arr[i] == x)
        {
            cout << i + 1;
            break;
        }
        if (i == 3)
            cout << 0;
    }
}