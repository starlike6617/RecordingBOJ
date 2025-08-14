#include <iostream>
using namespace std;

int main()
{
    int N, A, B;
    cin >> N >> A >> B;

    int cnt = 0;
    while (A != B)
    {
        cnt++;
        A = (A + 1) / 2;
        B = (B + 1) / 2;
    }

    cout << cnt;
}