#include <iostream>
using namespace std;

int main()
{
    int A, B, C;
    cin >> A >> B >> C;
    cout << A + B - (A + B < C * 2 ? 0 : C * 2);
}