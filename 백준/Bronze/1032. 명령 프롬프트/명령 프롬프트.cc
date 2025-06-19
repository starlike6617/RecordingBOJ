#include <iostream>
#include <vector>
#define endl '\n'
using namespace std;

int main()
{
    int N;
    cin >> N;

    vector<string> v(N);
    for (int i = 0; i < N; i++)
    {
        cin >> v[i];
    }

    for (int i = 0; i < v[0].size(); i++)
    {
        bool isSame = true;
        for (int j = 1; j < N; j++)
        {
            if (v[0][i] != v[j][i])
            {
                isSame = false;
                break;
            }
        }

        cout << (isSame ? v[0][i] : '?');
    }
}