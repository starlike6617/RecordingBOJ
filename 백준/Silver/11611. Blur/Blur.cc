#include <iostream>
#include <vector>
#include <set>
using namespace std;

int wrap(int x, int mod)
{
    return (x % mod + mod) % mod;
}

vector<vector<int>> blur(const vector<vector<int>> img, int w, int h)
{
    vector<vector<int>> result(h, vector<int>(w, 0));

    for (int y = 0; y < h; ++y)
    {
        for (int x = 0; x < w; ++x)
        {
            int sum = 0;
            for (int dy = -1; dy <= 1; ++dy)
            {
                for (int dx = -1; dx <= 1; ++dx)
                {
                    int ny = wrap(y + dy, h);
                    int nx = wrap(x + dx, w);
                    sum += img[ny][nx];
                }
            }
            result[y][x] = sum;
        }
    }

    return result;
}

int main()
{
    int w, h, b;
    cin >> w >> h >> b;

    vector<vector<int>> img(h, vector<int>(w));
    for (int i = 0; i < h; ++i)
    {
        for (int j = 0; j < w; ++j)
        {
            cin >> img[i][j];
        }
    }

    while (b--)
    {
        img = blur(img, w, h);
    }

    set<int> uniqueSet;
    for (int i = 0; i < h; ++i)
    {
        for (int j = 0; j < w; ++j)
        {
            uniqueSet.insert(img[i][j]);
        }
    }

    cout << uniqueSet.size();
}