#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    n--;
    cout << (char)(n % 8 + 'a') << n / 8 + 1;
}