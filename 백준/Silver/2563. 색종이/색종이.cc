#include <iostream>
using namespace std;

int main()
{
    int n, a, b, area = 0, arr[101][101] = {0,};
    cin >> n;

    while (n--)
    {
        cin >> a >> b;
        for (int i = a; i < a + 10; i++)
            for (int j = b; j < b + 10; j++)
                if (arr[i][j] == 0)
                {
                    arr[i][j] = 1;
                    area++;
                }
    }

    cout << area;
}