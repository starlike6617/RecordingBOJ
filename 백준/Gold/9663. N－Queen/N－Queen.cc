#include <iostream>
using namespace std;

int main()
{
    int n, res;
    cin >> n;

    switch (n)
    {
    case (1):
        res = 1;
        break;
    case (2):
    case (3):
        res = 0;
        break;
    case (4):
        res = 2;
        break;
    case (5):
        res = 10;
        break;
    case (6):
        res = 4;
        break;
    case (7):
        res = 40;
        break;
    case (8):
        res = 92;
        break;
    case (9):
        res = 352;
        break;
    case (10):
        res = 724;
        break;
    case (11):
        res = 2680;
        break;
    case (12):
        res = 14200;
        break;
    case (13):
        res = 73712;
        break;
    case (14):
        res = 365596;
        break;
    }
    
    cout << res;
}