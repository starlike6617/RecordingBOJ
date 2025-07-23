#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int N, k;
    cin >> N >> k;

    vector<int> v(N);
    for (int i = 0; i < N; i++)
    {
        cin >> v[i];
    }

    bool isNormal = true;
    {
        for (int i = 0; i < N; i++)
        {
            if (abs(v[i] - i) % k != 0)
            {
                isNormal = false;
                break;
            }
        }
    }

    cout << (isNormal ? "Yes" : "No");
}