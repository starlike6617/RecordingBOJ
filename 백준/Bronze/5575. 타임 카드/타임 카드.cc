#include <iostream>
#define endl '\n'
using namespace std;

int main()
{
    for (int i = 0; i < 3; i++)
    {
        int h1, m1, s1, h2, m2, s2;
        cin >> h1 >> m1 >> s1 >> h2 >> m2 >> s2;

        int t = (h2 - h1) * 3600 + (m2 - m1) * 60 + (s2 - s1);

        cout << t / 3600 << ' ';
        t %= 3600;
        cout << t / 60 << ' ';
        t %= 60;
        cout << t << endl;
    }
}