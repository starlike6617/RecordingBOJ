#include <iostream>
#include <vector>
using namespace std;

class Cube
{
public:
    int i;
    int j;
    int k;
};

int main()
{
    int N, M;
    cin >> N >> M;

    vector<Cube> cube(M);
    for (int a = 0; a < M; a++)
    {
        cin >> cube[a].i >> cube[a].j >> cube[a].k;
    }

    int cnt = 0;
    for (int a = 0; a < M; a++)
    {
        vector<bool> isExist(6);
        for (int b = 0; b < M; b++)
        {
            if (cube[a].i + 1 == cube[b].i && cube[a].j == cube[b].j && cube[a].k == cube[b].k)
                isExist[0] = true;
            else if (cube[a].i - 1 == cube[b].i && cube[a].j == cube[b].j && cube[a].k == cube[b].k)
                isExist[1] = true;
            else if (cube[a].i == cube[b].i && cube[a].j + 1 == cube[b].j && cube[a].k == cube[b].k)
                isExist[2] = true;
            else if (cube[a].i == cube[b].i && cube[a].j - 1 == cube[b].j && cube[a].k == cube[b].k)
                isExist[3] = true;
            else if (cube[a].i == cube[b].i && cube[a].j == cube[b].j && cube[a].k + 1 == cube[b].k)
                isExist[4] = true;
            else if (cube[a].i == cube[b].i && cube[a].j == cube[b].j && cube[a].k - 1 == cube[b].k)
                isExist[5] = true;
        }

        if (isExist[0] && isExist[1] && isExist[2] && isExist[3] && isExist[4] && isExist[5])
        {
            cnt++;
        }
    }

    cout << cnt;
}