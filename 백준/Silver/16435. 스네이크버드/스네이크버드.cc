#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int N, L;
    cin >> N >> L;

    int h[N];
    for (int i = 0; i < N; i++)
    {
        cin >> h[i];
    }

    sort(h, h + N);

    for (int i = 0; i < N; i++)
    {
        if (L >= h[i])
        {
            L++;
        }
        else
        {
            break;
        }
    }
    cout << L;
}