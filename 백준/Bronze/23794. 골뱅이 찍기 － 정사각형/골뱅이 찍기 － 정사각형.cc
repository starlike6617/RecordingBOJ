#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    for (int i = 0; i < N + 2; i++)
    {
        if (i == 0 || i == N + 1)
            for (int j = 0; j < N + 2; j++)
                cout << '@';
        else
            for (int j = 0; j < N + 2; j++)
            {
                if (j == 0 || j == N + 1)
                    cout << '@';
                else
                    cout << ' ';
            }
        cout << endl;
    }
}