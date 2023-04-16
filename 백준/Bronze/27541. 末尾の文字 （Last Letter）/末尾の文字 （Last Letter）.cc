#include <iostream>
using namespace std;

int main()
{
    int N;
    string S;
    cin >> N >> S;

    if (S[S.size() - 1] == 'G')
        for (int i = 0; i < S.size() - 1; i++)
            cout << S[i];
    else
        cout << S << 'G';
}