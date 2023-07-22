#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        if (i % 2)
        {
            cout << ' ';
        }
        cout << '*';
        for (int j = 0; j < N - 1; j++)
        {
            cout << " *";
        }
        cout << endl;
    }
}