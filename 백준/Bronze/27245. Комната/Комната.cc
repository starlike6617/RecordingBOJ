#include <iostream>
using namespace std;

int main()
{
    double w, l, h;
    cin >> w >> l >> h;

    bool isGood = false;
    if (min(w, l) / h >= 2 && max(w, l) / min(w, l) <= 2)
        isGood = true;

    if (isGood)
        cout << "good";
    else
        cout << "bad";
}