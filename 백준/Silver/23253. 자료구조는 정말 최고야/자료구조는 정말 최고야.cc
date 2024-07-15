#include <iostream>
#include <vector>
#include <queue>
#define endl '\n'
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, M;
    cin >> N >> M;

    bool isPos = true;
    while (M--)
    {
        int k;
        cin >> k;

        int prev = 200001;
        while (k--)
        {
            int a;
            cin >> a;

            if (prev < a)
                isPos = false;

            prev = a;
        }
    }

    cout << (isPos ? "Yes" : "No");
}