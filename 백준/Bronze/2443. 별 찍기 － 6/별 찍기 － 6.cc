#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    for (int i = N - 1; i >= 0; i--)
    {
        for (int j = 0; j < N - i - 1; j++)
            cout << ' ';
        for (int j = 0; j < i * 2 + 1; j++)
            cout << '*';
        cout << endl;
    }
}