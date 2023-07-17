#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int q[4] = {};
    int axis = 0;

    while (n--)
    {
        int x, y;
        cin >> x >> y;

        if (x == 0 || y == 0)
        {
            axis++;
        }
        else if (x > 0 && y > 0)
        {
            q[0]++;
        }
        else if (x < 0 && y > 0)
        {
            q[1]++;
        }
        else if (x < 0 && y < 0)
        {
            q[2]++;
        }
        else if (x > 0 && y < 0)
        {
            q[3]++;
        }
    }

    cout << "Q1: " << q[0] << endl;
    cout << "Q2: " << q[1] << endl;
    cout << "Q3: " << q[2] << endl;
    cout << "Q4: " << q[3] << endl;
    cout << "AXIS: " << axis;
}