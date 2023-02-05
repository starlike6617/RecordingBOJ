#include <iostream>
using namespace std;

int main()
{
    cout << fixed;
    cout.precision(2);

    while (1)
    {
        double n;
        cin >> n;

        if (n == -1)
            break;

        cout << "Objects weighing " << n << " on Earth will weigh " << n * 0.167 << " on the moon." << endl;
    }
}