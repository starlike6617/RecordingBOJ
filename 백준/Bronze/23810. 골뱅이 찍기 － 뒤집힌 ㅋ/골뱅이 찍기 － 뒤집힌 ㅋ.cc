#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    for (int i = 0; i < N * 5; i++)
    {
        if (i < N || (N * 2 <= i && i < N * 3))
            for (int j = 0; j < N * 5; j++)
                cout << '@';
        else
            for (int j = 0; j < N; j++)
                cout << '@';
        cout << endl;
    }
}