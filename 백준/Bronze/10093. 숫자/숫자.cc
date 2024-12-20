#include <iostream>
#define endl '\n'
using namespace std;

int main()
{
    long long A, B;
    cin >> A >> B;

    if (B < A)
    {
        swap(A, B);
    }

    if (A == B)
    {
        cout << 0 << endl;
    }
    else
    {
        cout << B - A - 1 << endl;
    }

    for (long long i = A + 1; i < B; i++)
    {
        cout << i << ' ';
    }
}