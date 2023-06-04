#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    for (int i = 0; i < 2 * N - 1; i++)
    {
        for (int j = 0; j < N - abs(N - 1 - i); j++)
            cout << '*';
        cout << endl;
    }
}