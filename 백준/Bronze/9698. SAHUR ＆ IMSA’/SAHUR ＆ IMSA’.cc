#include <iostream>
using namespace std;

int main()
{
    int T;
    cin >> T;

    for (int i = 1; i <= T; i++)
    {
        int H, M;
        cin >> H >> M;

        int time = H * 60 + M;
        time -= 45;
        if (time < 0)
        {
            time += 24 * 60;
        }

        cout << "Case #" << i << ": " << time / 60 << ' ' << time % 60 << endl;
    }
}