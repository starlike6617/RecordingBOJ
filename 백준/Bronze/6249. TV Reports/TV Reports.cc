#include <iostream>
using namespace std;

int main()
{
    int n, p, h;
    cin >> n >> p >> h;

    while (n--)
    {
        int num;
        cin >> num;

        if (p > num)
            cout << "NTV: Dollar dropped by " << p - num << " Oshloobs" << endl;
        if (h < num)
            cout << "BBTV: Dollar reached " << num << " Oshloobs, A record!" << endl;

        p = num;
        h = max(h, num);
    }
}