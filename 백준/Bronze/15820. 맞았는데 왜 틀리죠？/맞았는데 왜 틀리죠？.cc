#include <iostream>
using namespace std;

int main()
{
    int S1, S2;
    cin >> S1 >> S2;

    bool sample = true;
    bool system = true;

    while (S1--)
    {
        int test, ans;
        cin >> test >> ans;

        if (test != ans)
        {
            sample = false;
        }
    }

    while (S2--)
    {
        int test, ans;
        cin >> test >> ans;

        if (test != ans)
        {
            system = false;
        }
    }

    if (sample && system)
    {
        cout << "Accepted";
    }
    else if (sample && !system)
    {
        cout << "Why Wrong!!!";
    }
    else
    {
        cout << "Wrong Answer";
    }
}