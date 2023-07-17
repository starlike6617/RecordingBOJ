#include <iostream>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int N;
        cin >> N;
        cout << (N + 1) / 2 * (N + 1) / 2 << endl;
    }
}