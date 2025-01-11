#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int R, C;
    cin >> R >> C;

    int N;
    cin >> N;

    vector<int> rowV = {0, R};
    vector<int> colV = {0, C};

    while (N--)
    {
        int isRow, idx;
        cin >> isRow >> idx;

        if (isRow)
        {
            rowV.push_back(idx);
        }
        else
        {
            colV.push_back(idx);
        }
    }

    sort(rowV.begin(), rowV.end());
    sort(colV.begin(), colV.end());

    for (int i = 1; i < rowV.size(); i++)
    {
        rowV[i - 1] = rowV[i] - rowV[i - 1];
    }
    for (int i = 1; i < colV.size(); i++)
    {
        colV[i - 1] = colV[i] - colV[i - 1];
    }

    rowV.pop_back();
    colV.pop_back();

    sort(rowV.begin(), rowV.end(), greater<int>());
    sort(colV.begin(), colV.end(), greater<int>());

    cout << rowV[0] * colV[0];
}