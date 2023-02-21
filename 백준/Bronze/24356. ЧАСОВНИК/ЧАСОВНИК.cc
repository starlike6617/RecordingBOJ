#include <iostream>
using namespace std;

int main()
{
    int t1, m1, t2, m2;
    cin >> t1 >> m1 >> t2 >> m2;

    int time = t2 * 60 + m2 - t1 * 60 - m1;
    if (time < 0)
        time += 1440;
    cout << time << ' ' << time / 30;
}