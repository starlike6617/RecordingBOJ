#include <iostream>
using namespace std;

int main()
{
    double arr[2][2];
    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 2; j++)
            cin >> arr[i][j];

    double maxVal = 0;
    int maxTable = 0;

    for (int i = 0; i < 4; i++)
    {
        double temp = arr[0][0] / arr[1][0] + arr[0][1] / arr[1][1];
        if (temp > maxVal)
        {
            maxVal = temp;
            maxTable = i;
        }

        swap(arr[1][0], arr[1][1]);
        swap(arr[0][1], arr[1][1]);
        swap(arr[0][0], arr[0][1]);
    }

    cout << maxTable;
}