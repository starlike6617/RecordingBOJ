#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    while (n--)
    {
        int x;
        cin >> x;

        double res = 0;
        while (x--)
        {
            string str;
            int num;
            double price;
            cin >> str >> num >> price;
            res += num * price;
        }

        cout << fixed;
        cout.precision(2);
        cout << '$' << res << endl;
    }
}