#include <iostream>
using namespace std;

int main()
{
    int A, B;
    cin >> A >> B;

    cout << max(A + B, A - B) << endl;
    cout << min(A + B, A - B);
}