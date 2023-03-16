#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    for (int i = 1; i <= N * 4 - 3; i++)
        cout << (N < i && i < N * 3 - 2 ? ' ' : '*');
    cout << endl;

    for (int i = 0; i < N - 2; i++)
    {
        for (int j = 0; j < i + 1; j++)
            cout << ' ';
        cout << '*';
        for (int j = 0; j < N - 2; j++)
            cout << ' ';
        cout << '*';

        for (int j = 0; j < N * 2 - i * 2 - 5; j++)
            cout << ' ';

        cout << '*';
        for (int j = 0; j < N - 2; j++)
            cout << ' ';
        cout << '*';
        cout << endl;
    }

    for (int i = 1; i <= N * 3 - 2; i++)
        cout << (i == N || i == N * 2 - 1 || i == N * 3 - 2 ? '*' : ' ');
    cout << endl;

    for (int i = N - 3; i >= 0; i--)
    {
        for (int j = 0; j < i + 1; j++)
            cout << ' ';
        cout << '*';
        for (int j = 0; j < N - 2; j++)
            cout << ' ';
        cout << '*';

        for (int j = 0; j < N * 2 - i * 2 - 5; j++)
            cout << ' ';

        cout << '*';
        for (int j = 0; j < N - 2; j++)
            cout << ' ';
        cout << '*';
        cout << endl;
    }

    for (int i = 1; i <= N * 4 - 3; i++)
        cout << (N < i && i < N * 3 - 2 ? ' ' : '*');
}