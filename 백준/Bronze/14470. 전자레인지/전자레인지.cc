#include <iostream>
using namespace std;

int main()
{
    int A, B, C, D, E;
    cin >> A >> B >> C >> D >> E;

    int time = 0;
    bool frz = true;

    if (A > 0)
        frz = false;

    while (A != B)
    {
        if (A < 0)
        {
            A += 1;
            time += C;
        }
        else if (A == 0 && frz == true)
        {
            frz = false;
            time += D;
        }
        else
        {
            A += 1;
            time += E;
        }
    }

    cout << time;
}