#include <iostream>
using namespace std;

int main()
{
    int M;
    cin >> M;

    bool arr[3] = {};
    arr[0] = true;

    while (M--)
    {
        int X, Y;
        cin >> X >> Y;
        swap(arr[X - 1], arr[Y - 1]);
    }

    for (int i = 0; i < 3; i++)
        if (arr[i])
            cout << i + 1 << endl;
}