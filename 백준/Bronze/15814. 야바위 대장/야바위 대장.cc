#include <iostream>
using namespace std;

int main()
{
    string S;
    int T;
    cin >> S >> T;

    while (T--)
    {
        int A, B;
        cin >> A >> B;

        char tmp = S[A];
        S[A] = S[B];
        S[B] = tmp;
    }

    cout << S;
}