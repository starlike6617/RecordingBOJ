#include <iostream>
#define endl '\n'
using namespace std;

int main()
{
    string X;
    cin >> X;

    int cnt = 0;
    while (X.size() > 1)
    {
        int Y = 0;
        while (!X.empty())
        {
            Y += X.back() - '0';
            X.pop_back();
        }

        X = to_string(Y);
        cnt++;
    }

    cout << cnt << endl;
    cout << (X == "0" || X == "3" || X == "6" || X == "9" ? "YES" : "NO");
}