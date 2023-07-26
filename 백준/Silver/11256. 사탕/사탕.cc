#include <iostream>
#include <algorithm>
using namespace std;

class Box
{
public:
    int R;
    int C;
};

bool cmp(Box a, Box b)
{
    return a.R * a.C > b.R * b.C;
}

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int J, N;
        cin >> J >> N;

        Box arr[N];
        for (int i = 0; i < N; i++)
        {
            cin >> arr[i].R >> arr[i].C;
        }

        sort(arr, arr + N, cmp);

        int cnt = 0;
        for (int i = 0; i < N; i++)
        {
            if (J > 0)
            {
                J -= arr[i].R * arr[i].C;
                cnt++;
            }
            else
            {
                break;
            }
        }
        cout << cnt << endl;
    }
}