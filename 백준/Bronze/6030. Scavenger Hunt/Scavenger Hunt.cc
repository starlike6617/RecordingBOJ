#include <iostream>
using namespace std;

int main()
{
    int P, Q;
    cin >> P >> Q;

    for (int i = 1; i <= P; i++)
    {
        for (int j = 1; j <= Q; j++)
        {
            if (P % i == 0 && Q % j == 0)
            {
                cout << i << ' ' << j << '\n';
            }
        }
    }
}