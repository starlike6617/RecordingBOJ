#include <iostream>
using namespace std;

int main()
{
    while (true)
    {
        int N;
        cin >> N;

        if (N == 0)
            break;

        int res = N * N - (N - 1);
        cout << N << " => " << res << endl;
    }
}