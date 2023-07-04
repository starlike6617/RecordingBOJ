#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    for (int i = 0; i < N * 5; i++)
    {
        if (i < N)
            for (int j = 0; j < N * 5; j++)
            {
                if (j < N * 3 || j >= N * 4)
                    cout << '@';
                else
                    cout << ' ';
            }
        else if (i >= N * 4)
            for (int j = 0; j < N * 5; j++)
            {
                if (j < N || j >= N * 2)
                    cout << '@';
                else
                    cout << ' ';
            }
        else
            for (int j = 0; j < N * 5; j++)
            {
                if (j < N || (N * 2 <= j && j < N * 3) || j >= N * 4)
                    cout << '@';
                else
                    cout << ' ';
            }
        cout << endl;
    }
}