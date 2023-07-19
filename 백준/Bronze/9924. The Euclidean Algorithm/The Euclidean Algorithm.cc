#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int A, B;
    cin >> A >> B;

    int cnt = 0;
    while (A != B)
    {
        int tmp = A;
        A = max(A, B) - min(A, B);
        B = min(tmp, B);
        cnt++;
    }
    cout << cnt;
}