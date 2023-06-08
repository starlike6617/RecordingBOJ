#include <iostream>
using namespace std;

int main()
{
    int n, c;
    cin >> n >> c;

    int total = 0;
    int totalBed = 0;
    double totalFlat = 0;

    while (n--)
    {
        int a;
        string t;
        cin >> a >> t;

        total += a;
        if (t == "bedroom")
            totalBed += a;
        if (t == "balcony")
            totalFlat += (double)a / 2;
        else
            totalFlat += a;
    }

    cout << total << endl
         << totalBed << endl;

    cout << fixed;
    cout.precision(1);
    cout << totalFlat * c;
}