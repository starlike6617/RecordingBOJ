#include <iostream>
using namespace std;

int main()
{
    int A, B;
    cin >> A >> B;
    cout << ((A + B) % 12 ? (A + B) % 12 : 12);
}