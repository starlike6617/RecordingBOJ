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

        while (N--)
        {
            int A, B;
            cin >> A >> B;
            cout << A + B << ' ' << A * B << endl;
        }
    }
}