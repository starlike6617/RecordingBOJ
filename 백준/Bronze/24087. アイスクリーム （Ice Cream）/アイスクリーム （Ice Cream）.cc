#include <iostream>
using namespace std;

int main()
{
    int S, A, B;
    cin >> S >> A >> B;

    if (S <= A)
        cout << 250;
    else
        cout << 250 + 100 * ((S - A) / B + ((S - A) % B ? 1 : 0));
}