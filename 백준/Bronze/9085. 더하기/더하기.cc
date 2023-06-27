#include <iostream>
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
        while (N--)
        {
            int num;
            cin >> num;
            sum += num;
        }

        cout << sum << endl;
    }
}