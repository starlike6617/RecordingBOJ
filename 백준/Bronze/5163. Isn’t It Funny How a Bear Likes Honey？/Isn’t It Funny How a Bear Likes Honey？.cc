#include <iostream>
#define pi 3.14159265358979
using namespace std;

int main()
{
    int K;
    cin >> K;

    for (int i = 1; i <= K; i++)
    {
        int b;
        double w;
        cin >> b >> w;

        double sumBalloon = 0;
        while (b--)
        {
            double r;
            cin >> r;
            sumBalloon += r * r * r * pi * 4 / 3;
        }

        cout << "Data Set " << i << ":" << endl;
        cout << (w * 1000 <= sumBalloon ? "Yes" : "No") << endl
             << endl;
    }
}