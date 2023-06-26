#include <iostream>
using namespace std;

int main()
{
    int h1, m1, s1, h2, m2, s2;
    char c;
    cin >> h1 >> c >> m1 >> c >> s1 >> h2 >> c >> m2 >> c >> s2;

    int t1 = h1 * 3600 + m1 * 60 + s1;
    int t2 = h2 * 3600 + m2 * 60 + s2;

    int t = t2 - t1;
    if (t < 0)
        t += 24 * 3600;

    int h = t / 3600;
    int m = t % 3600 / 60;
    int s = t % 60;

    printf("%02d:%02d:%02d", h, m, s);
}