#include <iostream>
using namespace std;

int main()
{
    int N, A, B, C, D;
    cin >> N >> A >> B >> C >> D;

    int n1, n2;
    n1 = N / A + (N % A == 0 ? 0 : 1);
    n2 = N / C + (N % C == 0 ? 0 : 1);

    cout << min(n1 * B, n2 * D);
}