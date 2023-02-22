#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    int ans = 10000;
    while (N--)
    {
        int A, B;
        cin >> A >> B;

        if (A <= B)
            ans = min(ans, max(A, B));
    }

    cout << (ans == 10000 ? -1 : ans);
}