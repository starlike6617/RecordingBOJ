#include <iostream>
#define endl '\n'
using namespace std;

int main()
{
    int A, B, C;
    cin >> A >> B >> C;

    int res1, res2;
    res1 = A + B - C;
    res2 = stoi(to_string(A) + to_string(B)) - C;

    cout << res1 << endl;
    cout << res2;
}