#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    bool is2exp = true;
    while (N)
    {
        if (N != 1 && N % 2 == 1)
        {
            is2exp = false;
            break;
        }

        N /= 2;
    }

    if (is2exp)
    {
        cout << 1;
    }
    else
    {
        cout << 0;
    }
}