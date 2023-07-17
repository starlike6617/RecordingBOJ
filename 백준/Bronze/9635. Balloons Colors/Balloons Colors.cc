#include <iostream>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int N, X, Y;
        cin >> N >> X >> Y;

        int arr[N];
        for (int i = 0; i < N; i++)
        {
            cin >> arr[i];
        }

        if (arr[0] == X && arr[N - 1] == Y)
        {
            cout << "BOTH" << endl;
        }
        else if (arr[0] == X && arr[N - 1] != Y)
        {
            cout << "EASY" << endl;
        }
        else if (arr[0] != X && arr[N - 1] == Y)
        {
            cout << "HARD" << endl;
        }
        else
        {
            cout << "OKAY" << endl;
        }
    }
}