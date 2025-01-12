#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    int arr[500][500] = {};
    while (N--)
    {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;

        for (int i = x1; i < x2; i++)
        {
            for (int j = y1; j < y2; j++)
            {
                arr[i][j] = 1;
            }
        }
    }

    int res = 0;
    for (int i = 0; i < 500; i++)
    {
        for (int j = 0; j < 500; j++)
        {
            res += arr[i][j];
        }
    }

    cout << res;
}