#include <iostream>
using namespace std;

int main()
{
    int h1, m1, s1, h2, m2, s2;
    char c;
    cin >> h1 >> c >> m1 >> c >> s1 >> h2 >> c >> m2 >> c >> s2;

    int t1, t2;
    t1 = h1 * 3600 + m1 * 60 + s1;
    t2 = h2 * 3600 + m2 * 60 + s2;

    cout << t2 - t1 + (t2 < t1 ? 24 * 3600 : 0);
}