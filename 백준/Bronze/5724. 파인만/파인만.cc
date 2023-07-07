#include <iostream>
using namespace std;

int main()
{
    while (true)
    {
        int N;
        cin >> N;

        if (N == 0)
        {
            break;
        }

        cout << N * (N + 1) * (2 * N + 1) / 6 << '\n';
    }
}