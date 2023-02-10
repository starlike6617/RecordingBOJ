#include <iostream>
using namespace std;

int main()
{
    int A, B, C;
    cin >> A >> B >> C;

    if (A == B)
    {
        if (B == C)
            cout << '*';
        else
            cout << 'C';
    }
    else if (A != B)
    {
        if (A == C)
            cout << 'B';
        else if (B == C)
            cout << 'A';
    }
}