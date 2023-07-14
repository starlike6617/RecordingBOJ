#include <iostream>
#include <cmath>
using namespace std;

double A[7] = {9.23076, 1.84523, 56.0211, 4.99087, 0.188807, 15.9803, 0.11193};
double B[7] = {26.7, 75, 1.5, 42.5, 210, 3.8, 254};
double C[7] = {1.835, 1.348, 1.05, 1.81, 1.41, 1.04, 1.88};
double P[7];
bool isTrack[7] = {true, false, false, true, false, false, true};

int getScore(int n)
{
    if (isTrack[n])
    {
        return (int)(A[n] * pow(B[n] - P[n], C[n]));
    }
    else
    {
        return (int)(A[n] * pow(P[n] - B[n], C[n]));
    }
}

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int sum = 0;
        for (int i = 0; i < 7; i++)
        {
            cin >> P[i];
            sum += getScore(i);
        }
        cout << sum << endl;
    }
}