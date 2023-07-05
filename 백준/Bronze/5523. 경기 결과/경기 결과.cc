#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;

    int cntA = 0, cntB = 0;
    while (N--)
    {
        int A, B;
        cin >> A >> B;

        if (A > B)
            cntA++;
        else if (A < B)
            cntB++;
    }
    cout << cntA << ' ' << cntB;
}