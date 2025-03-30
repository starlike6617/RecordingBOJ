#include <iostream>
using namespace std;

int main()
{
    int H1, M1, H2, M2;
    char n;
    cin >> H1 >> M1 >> H2 >> M2 >> n;

    int t1 = H1 * 60 + M1;
    int t2 = H2 * 60 + M2;

    int cnt = 0;
    for (int t = t1; t <= t2; t++)
    {
        int h = t / 60;
        int m = t % 60;

        string time = to_string(h * 100 + m);
        while (time.size() < 4)
        {
            time = "0" + time;
        }

        for (char c : time)
        {
            if (c == n)
            {
                cnt++;
                break;
            }
        }
    }

    cout << cnt;
}