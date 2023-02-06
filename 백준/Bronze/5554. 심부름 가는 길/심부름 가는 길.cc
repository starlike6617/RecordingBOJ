#include <iostream>
using namespace std;

int main()
{
    int a, b, c, d, t;
    cin >> a >> b >> c >> d;
    t = a + b + c + d;

    cout << t / 60 << endl
         << t % 60;
}