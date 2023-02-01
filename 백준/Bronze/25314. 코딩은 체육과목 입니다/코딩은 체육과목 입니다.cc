#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    N /= 4;
    while (N--)
        cout << "long ";
    cout << "int";
}