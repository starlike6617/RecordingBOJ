#include <iostream>
using namespace std;

int main()
{
    int T;
    cin >> T;
    cin.ignore();

    while (T--)
    {
        string N;
        getline(cin, N);

        int sum = 0;
        string tmp = "";

        for (int i = 0; i < N.size(); i++)
        {
            tmp += N[i];
            if (N[i] == ' ' || i == N.size() - 1)
            {
                sum += stoi(tmp);
                tmp = "";
            }
        }

        cout << sum << endl;
    }
}