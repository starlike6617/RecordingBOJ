#include <iostream>
using namespace std;

int main()
{
    for (int i = 0; i < 3; i++)
    {
        int h1, m1, s1, h2, m2, s2, t;
        cin >> h1 >> m1 >> s1 >> h2 >> m2 >> s2;
        t = h2 * 3600 + m2 * 60 + s2 - h1 * 3600 - m1 * 60 - s1;
        cout << t / 3600 << ' ' << (t % 3600) / 60 << ' ' << t % 60 << endl;
    }
}