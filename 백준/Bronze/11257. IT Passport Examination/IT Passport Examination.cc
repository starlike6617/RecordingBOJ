#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    while (N--)
    {
        int num, a, b, c;
        cin >> num >> a >> b >> c;

        cout << num << ' ' << a + b + c << ' ';

        if (a + b + c >= 55 && a >= 10.5 && b >= 7.5 && c >= 12)
            cout << "PASS" << endl;
        else
            cout << "FAIL" << endl;
    }
}