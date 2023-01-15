#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, time = 0;
    cin >> N;

    bool clockwise = true;

    while (N--)
    {
        string S;
        int X;
        cin >> S >> X;

        bool hit = false;

        if (clockwise)
            time++;
        else
            time--;

        if (time == 0)
            time = 12;
        else if (time == 13)
            time = 1;

        if ((S == "HOURGLASS") && !(time == X))
            clockwise = !clockwise;

        if ((time == X) && !(S == "HOURGLASS"))
            hit = true;

        cout << time << ' ' << (hit ? "YES" : "NO") << '\n';
    }
}