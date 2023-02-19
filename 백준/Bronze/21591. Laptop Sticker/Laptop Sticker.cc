#include <iostream>
using namespace std;

int main()
{
    int wc, hc, ws, hs;
    cin >> wc >> hc >> ws >> hs;
    cout << (wc - 2 >= ws && hc - 2 >= hs ? 1 : 0);
}