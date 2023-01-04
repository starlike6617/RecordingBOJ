#include <iostream>
#include <algorithm>
using namespace std;

int arr[30][30];

int C(int x, int y)
{
    if (arr[x][y])
        return arr[x][y];

    if (x == y || y == 0)
        return 1;
    else
        return arr[x][y] = C(x - 1, y - 1) + C(x - 1, y);
}

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int N, M;
        cin >> N >> M;
        cout << C(M, N) << endl;
    }
}