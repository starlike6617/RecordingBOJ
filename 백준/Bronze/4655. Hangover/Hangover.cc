#include <iostream>
using namespace std;

int main()
{
    while (true)
    {
        double c;
        cin >> c;

        if (c == 0)
            break;

        double sum = 0;
        for (int i = 2;; i++)
        {
            sum += 1.0 / i;
            if (sum >= c)
            {
                cout << i - 1 << " card(s)" << endl;
                break;
            }
        }
    }
}