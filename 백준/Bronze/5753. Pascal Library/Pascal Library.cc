#include <iostream>
using namespace std;

int main()
{
    while (true)
    {
        int N, D;
        cin >> N >> D;

        if (N == 0 && D == 0)
        {
            break;
        }

        int arr[N] = {};
        for (int i = 0; i < D; i++)
        {
            for (int j = 0; j < N; j++)
            {
                int num;
                cin >> num;

                if (num == 1)
                {
                    arr[j]++;
                }
            }
        }

        bool flag = false;
        for (int i : arr)
        {
            if (i == D)
            {
                flag = true;
                break;
            }
        }

        if (flag)
        {
            cout << "yes" << endl;
        }
        else
        {
            cout << "no" << endl;
        }
    }
}