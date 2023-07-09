#include <iostream>
using namespace std;

int main()
{
    int h, M;
    cin >> h >> M;

    int A = -6 * M * M * M * M + h * M * M * M + 2 * M * M + M;

    if (A > 0)
    {
        cout << "The balloon does not touch ground in the given time.";
    }
    else
    {
        cout << "The balloon first touches ground at hour: ";
        for (int i = 1; i <= M; i++)
        {
            int B = -6 * i * i * i * i + h * i * i * i + 2 * i * i + i;
            if (B <= 0)
            {
                cout << i;
                break;
            }
        }
    }
}