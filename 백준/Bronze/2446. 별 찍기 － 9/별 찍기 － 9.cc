#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    for (int i = 0; i < 2 * N - 1; i++)
    {
        for (int j = 0; j < N - 1 - abs(N - i - 1); j++)
            cout << ' ';
        for (int j = 0; j < abs(N - i - 1) * 2 + 1; j++)
            cout << '*';
        cout << endl;
    }
}