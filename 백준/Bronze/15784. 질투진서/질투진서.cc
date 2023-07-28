#include <iostream>
using namespace std;

int main()
{
    int N, a, b;
    cin >> N >> a >> b;

    int X[N][N];
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cin >> X[i][j];
        }
    }

    a -= 1;
    b -= 1;

    bool isHandsome = true;
    for (int i = 0; i < N; i++)
    {
        if (X[a][b] < X[i][b])
        {
            isHandsome = false;
            break;
        }
        if (X[a][b] < X[a][i])
        {
            isHandsome = false;
            break;
        }
    }

    if (isHandsome)
    {
        cout << "HAPPY";
    }
    else
    {
        cout << "ANGRY";
    }
}