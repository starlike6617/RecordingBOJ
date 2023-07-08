#include <iostream>
using namespace std;

int main()
{
    int K;
    cin >> K;

    for (int i = 1; i <= K; i++)
    {
        int E, A;
        cin >> E >> A;

        cout << "Data Set " << i << ":" << endl;

        int cnt = -1;
        while (E > A)
        {
            A *= 5;
            cnt++;
        }

        if (cnt == -1)
        {
            cout << "no ";
        }
        else
        {
            while (cnt--)
            {
                cout << "mega ";
            }
        }

        cout << "drought" << endl
             << endl;
    }
}