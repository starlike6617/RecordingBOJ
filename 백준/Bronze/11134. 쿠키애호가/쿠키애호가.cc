#include <iostream>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int N, C;
        cin >> N >> C;
        cout << N / C + (N % C == 0 ? 0 : 1) << endl;
    }
}