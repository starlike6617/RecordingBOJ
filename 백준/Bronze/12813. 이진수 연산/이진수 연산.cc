#include <iostream>
using namespace std;

int main()
{
    string A, B;
    cin >> A >> B;

    for (int i = 0; i < 100000; i++)
    {
        cout << ((A[i] - '0') & (B[i] - '0'));
    }
    cout << endl;

    for (int i = 0; i < 100000; i++)
    {
        cout << ((A[i] - '0') | (B[i] - '0'));
    }
    cout << endl;

    for (int i = 0; i < 100000; i++)
    {
        cout << ((A[i] - '0') ^ (B[i] - '0'));
    }
    cout << endl;

    for (int i = 0; i < 100000; i++)
    {
        cout << !(A[i] - '0');
    }
    cout << endl;

    for (int i = 0; i < 100000; i++)
    {
        cout << !(B[i] - '0');
    }
}