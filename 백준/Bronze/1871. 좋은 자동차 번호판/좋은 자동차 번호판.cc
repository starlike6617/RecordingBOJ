#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    while (N--)
    {
        char c[3], hyphen;
        int a;
        cin >> c[0] >> c[1] >> c[2] >> hyphen >> a;

        if (abs((c[0] - 'A') * 26 * 26 + (c[1] - 'A') * 26 + (c[2] - 'A') - a) <= 100)
        {
            cout << "nice" << endl;
        }
        else
        {
            cout << "not nice" << endl;
        }
    }
}