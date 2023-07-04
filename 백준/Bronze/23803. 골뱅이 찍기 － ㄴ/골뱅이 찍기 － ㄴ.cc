#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    for (int i = 0; i < N * 5; i++)
    {
        if (i >= N * 4)
            for (int j = 0; j < N * 5; j++)
                cout << '@';
        else
            for (int j = 0; j < N; j++)
                cout << '@';
        cout << endl;
    }
}