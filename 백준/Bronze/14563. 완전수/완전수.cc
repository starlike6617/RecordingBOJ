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
        for (int i = 1; i < N; i++)
            if (N % i == 0)
                sum += i;

        if (sum == N)
            cout << "Perfect" << endl;
        else if (sum < N)
            cout << "Deficient" << endl;
        else
            cout << "Abundant" << endl;
    }
}