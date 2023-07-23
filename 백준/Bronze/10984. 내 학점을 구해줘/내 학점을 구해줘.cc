#include <iostream>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int N;
        cin >> N;

        int credit = 0;
        double sum = 0;

        while (N--)
        {
            double a, b;
            cin >> a >> b;

            credit += a;
            sum += a * b;
        }

        cout << fixed;
        cout.precision(1);
        cout << credit << ' ' << sum / credit << endl;
    }
}