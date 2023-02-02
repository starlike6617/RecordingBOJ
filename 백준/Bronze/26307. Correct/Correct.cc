#include <iostream>
using namespace std;

int main()
{
    int H, M;
    cin >> H >> M;
    cout << (H - 9) * 60 + M;
}