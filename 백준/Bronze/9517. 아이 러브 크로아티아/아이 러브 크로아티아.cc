#include <iostream>
using namespace std;

int main()
{
    int K, N;
    cin >> K >> N;

    int bomb = 210;
    while (N--)
    {
        int T;
        char Z;
        cin >> T >> Z;

        bomb -= T;

        if (bomb <= 0)
        {
            cout << K << endl;
            break;
        }

        if (Z == 'T')
        {
            K++;
            if (K > 8)
            {
                K = 1;
            }
        }
    }
}