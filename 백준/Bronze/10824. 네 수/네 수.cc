#include <iostream>
using namespace std;

int main()
{
    string A, B, C, D;
    cin >> A >> B >> C >> D;
    cout << to_string(stoll(A + B) + stoll(C + D));
}