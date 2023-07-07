#include <iostream>
using namespace std;

int main()
{
    while (true)
    {
        int N;
        cin >> N;

        if (N == 0)
        {
            break;
        }

        int X = 0, Y = 0;
        while (N--)
        {
            int num;
            cin >> num;

            if (num == 0)
            {
                X++;
            }
            else
            {
                Y++;
            }
        }
        cout << "Mary won " << X << " times and John won " << Y << " times" << endl;
    }
}