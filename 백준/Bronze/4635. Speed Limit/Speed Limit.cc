#include <iostream>
using namespace std;

int main()
{
    while (true)
    {
        int n;
        cin >> n;

        if (n == -1)
            break;

        int res = 0;
        int prevTime = 0;

        while (n--)
        {
            int spd, time;
            cin >> spd >> time;

            res += spd * (time - prevTime);
            prevTime = time;
        }

        cout << res << " miles" << endl;
    }
}