#include <iostream>
using namespace std;

int main()
{
    while (1)
    {
        int M, F;
        cin >> M >> F;

        if (M == 0 && F == 0)
            break;

        cout << M + F << endl;
    }
}