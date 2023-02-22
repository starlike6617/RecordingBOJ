#include <iostream>
using namespace std;

int main()
{
    int A, B, C;
    cin >> A >> B >> C;

    int avg = (A + B + C) / 3;
    cout << (C - avg) + (avg - A);
}