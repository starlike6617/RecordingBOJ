#include <iostream>
#define endl '\n'
using namespace std;

int main()
{
    int E, S, M;
    cin >> E >> S >> M;

    while (!(E == S && S == M))
    {
        if (min(E, min(S, M)) == E)
        {
            E += 15;
        }
        else if (min(E, min(S, M)) == S)
        {
            S += 28;
        }
        else if (min(E, min(S, M)) == M)
        {
            M += 19;
        }
    }

    cout << E;
}