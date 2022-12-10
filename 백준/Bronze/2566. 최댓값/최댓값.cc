#include <iostream>
using namespace std;

int main()
{
    int arr[9][9];
    for (int i = 0; i < 9; i++)
        for (int j = 0; j < 9; j++)
            cin >> arr[i][j];

    int max = 0, maxRow = 1, maxCol = 1;
    for (int i = 0; i < 9; i++)
        for (int j = 0; j < 9; j++)
        {
            if (max < arr[i][j])
            {
                max = arr[i][j];
                maxRow = i + 1;
                maxCol = j + 1;
            }
        }
    cout << max << endl
         << maxRow << ' ' << maxCol;
}