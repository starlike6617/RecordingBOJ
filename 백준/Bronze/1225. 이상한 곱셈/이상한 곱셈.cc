#include <iostream>
using namespace std;

int main()
{
    string A, B;
    cin >> A >> B;

    long long res = 0;
    for (char a : A)
    {
        for (char b : B)
        {
            res += (a - '0') * (b - '0');
        }
    }
    cout << res;
}