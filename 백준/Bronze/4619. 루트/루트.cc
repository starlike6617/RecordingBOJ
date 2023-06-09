#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    while (true)
    {
        int B, N;
        cin >> B >> N;

        if (B == 0 && N == 0)
            break;

        for (int A = 1; A <= B; A++)
            if (pow(A, N) >= B)
            {
                if (pow(A, N) - B < B - pow(A - 1, N))
                    cout << A << endl;
                else
                    cout << A - 1 << endl;
                break;
            }
    }
}