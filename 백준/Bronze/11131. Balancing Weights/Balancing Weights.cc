#include <iostream>
#include <vector>
#include <algorithm>
#define endl '\n'
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int N;
        cin >> N;

        int sum = 0;
        for (int i = 0; i < N; i++)
        {
            int num;
            cin >> num;

            sum += num;
        }

        if (sum < 0)
        {
            cout << "Left" << endl;
        }
        else if (sum > 0)
        {
            cout << "Right" << endl;
        }
        else
        {
            cout << "Equilibrium" << endl;
        }
    }
}