#include <iostream>
using namespace std;

int main()
{
    int Z;
    cin >> Z;

    while (Z--)
    {
        double arr[2][3];
        for (int i = 0; i < 2; i++)
            for (int j = 0; j < 3; j++)
                cin >> arr[i][j];

        double sum1 = 0, sum2 = 0;
        for (int i = 0; i < 3; i++)
        {
            sum1 += arr[0][i] * arr[1][(i + 1) % 3];
            sum2 += arr[1][i] * arr[0][(i + 1) % 3];
        }

        if (sum1 == sum2)
            cout << "=" << '\n';
        else
            cout << (sum1 > sum2 ? "ADAM" : "GOSIA") << '\n';
    }
}