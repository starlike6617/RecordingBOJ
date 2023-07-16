#include <iostream>
using namespace std;

int main()
{
    int P;
    cin >> P;

    while (P--)
    {
        int N;
        double D, A, B, F;
        cin >> N >> D >> A >> B >> F;

        cout << fixed;
        cout.precision(6);
        cout << N << ' ' << D / (A + B) * F << endl;
    }
}