#include <iostream>
using namespace std;

int main()
{
    int N, W, H;
    cin >> N >> W >> H;

    while (N--)
    {
        int a;
        cin >> a;

        if (a * a <= W * W + H * H)
            cout << "DA" << endl;
        else
            cout << "NE" << endl;
    }
}