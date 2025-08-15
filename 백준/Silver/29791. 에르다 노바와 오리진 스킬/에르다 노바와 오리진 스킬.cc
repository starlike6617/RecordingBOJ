#include <iostream>
#include <vector>
#include <algorithm>
#define endl '\n'
using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;

    vector<int> A(N);
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }
    sort(A.begin(), A.end());

    vector<int> B(M);
    for (int i = 0; i < M; i++)
    {
        cin >> B[i];
    }
    sort(B.begin(), B.end());

    int cntA = 0;
    int prevA = 0;
    for (int i : A)
    {
        if (prevA == 0 || i >= prevA + 100)
        {
            cntA++;
            prevA = i;
        }
    }

    int cntB = 0;
    int prevB = 0;
    for (int i : B)
    {
        if (prevB == 0 || i >= prevB + 360)
        {
            cntB++;
            prevB = i;
        }
    }

    cout << cntA << ' ' << cntB;
}