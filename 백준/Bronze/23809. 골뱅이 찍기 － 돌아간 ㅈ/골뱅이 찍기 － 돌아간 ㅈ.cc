#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    for (int i = 0; i < N * 5; i++)
    {
        if (i < N || i >= N * 4)
            for (int j = 0; j < N * 5; j++)
            {
                if (j < N || j >= N * 4)
                    cout << '@';
                else
                    cout << ' ';
            }
        else if ((N <= i && i < N * 2) || (N * 3 <= i && i < N * 4))
            for (int j = 0; j < N * 4; j++)
            {
                if (j < N || j >= N * 3)
                    cout << '@';
                else
                    cout << ' ';
            }
        else
            for (int j = 0; j < N * 3; j++)
                cout << '@';
        cout << endl;
    }
}