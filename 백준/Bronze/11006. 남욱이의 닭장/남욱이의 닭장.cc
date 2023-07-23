#include <iostream>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int N, M;
        cin >> N >> M;

        int b = N - M;
        int a = M - b;

        cout << a << ' ' << b << endl;
    }
}