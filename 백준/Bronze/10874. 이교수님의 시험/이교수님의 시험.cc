#include <iostream>
#define endl '\n'
using namespace std;

int main()
{
    int N;
    cin >> N;

    for (int i = 1; i <= N; i++)
    {
        bool isCheating = true;

        for (int j = 0; j < 10; j++)
        {
            int n;
            cin >> n;

            if (n != j % 5 + 1)
            {
                isCheating = false;
            }
        }

        if (isCheating)
        {
            cout << i << endl;
        }
    }
}