#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N - 1 - i; j++)
        {
            cout << ' ';
        }
        cout << '*';

        if (i == N - 1)
        {
            for (int j = 0; j < 2 * i; j++)
            {
                cout << '*';
            }
        }
        else
        {
            for (int j = 0; j < 2 * i - 1; j++)
            {
                cout << ' ';
            }
            if (i != 0)
            {
                cout << '*';
            }
        }

        cout << endl;
    }
}