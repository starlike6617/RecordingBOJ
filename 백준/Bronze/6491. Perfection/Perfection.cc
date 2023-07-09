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

        int sum = 0;
        for (int i = 1; i < N; i++)
        {
            if (N % i == 0)
            {
                sum += i;
            }
        }

        cout << N << ' ';
        if (sum == N)
        {
            cout << "PERFECT" << endl;
        }
        else if (sum < N)
        {
            cout << "DEFICIENT" << endl;
        }
        else
        {
            cout << "ABUNDANT" << endl;
        }
    }
}