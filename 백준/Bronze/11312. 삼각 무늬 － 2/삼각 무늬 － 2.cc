#include <iostream>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        long long A, B;
        cin >> A >> B;
        cout << (A / B) * (A / B) << endl;
    }
}