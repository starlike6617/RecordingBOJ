#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    for (int i = 0; i < 2 * N - 1; i++)
    {
        for (int j = 0; j < N - abs(i - N + 1); j++)
            cout << '*';
        for (int j = 0; j < abs(i - N + 1) * 2; j++)
            cout << ' ';
        for (int j = 0; j < N - abs(i - N + 1); j++)
            cout << '*';
        cout << endl;
    }
}