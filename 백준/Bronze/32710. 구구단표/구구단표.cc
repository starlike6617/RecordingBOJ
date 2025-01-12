#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    bool isGugudan = false;
    for (int i = 2; i <= 9; i++)
    {
        for (int j = 1; j <= 9; j++)
        {
            if (N == i * j)
            {
                isGugudan = true;
                i = 10;
                break;
            }
        }
    }

    cout << (isGugudan || N == 1 ? 1 : 0);
}