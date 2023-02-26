#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    cout << "int a;" << endl;
    for (int i = 1; i <= N; i++)
    {
        cout << "int ";

        for (int j = 0; j < i; j++)
            cout << "*";
        cout << "ptr";
        if (i != 1)
            cout << i;

        cout << " = &";
        if (i == 1)
            cout << "a";
        else
        {
            cout << "ptr";
            if (i != 2)
                cout << i - 1;
        }
        cout << ";" << endl;
    }
}