#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int N;
    cin >> N;

    vector<int> v(N);
    for (int i = 0; i < N; i++)
    {
        cin >> v[i];
        v[i] %= 2;
    }

    long long evenCnt = 0, oddCnt = 0;
    int evenLast = 0, oddLast = 0;

    for (int i = 0; i < N; i++)
    {
        if (v[i] == 0)
        {
            evenCnt += i - evenLast;
            evenLast++;
        }
        else
        {
            oddCnt += i - oddLast;
            oddLast++;
        }
    }

    cout << min(evenCnt, oddCnt);
}