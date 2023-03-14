#include <iostream>
using namespace std;

int main()
{
    int s;
    string n;
    cin >> s >> n;

    int r = s * 2 + 3;
    int c = s + 2;
    char arr[10][r][c];

    for (int i = 0; i < 10; i++)
        for (int j = 0; j < r; j++)
            for (int k = 0; k < c; k++)
                arr[i][j][k] = ' ';

    for (int i = 1; i <= s; i++)
    {
        arr[0][0][i] = '-';
        arr[0][r - 1][i] = '-';
        arr[0][i][0] = '|';
        arr[0][i][c - 1] = '|';
        arr[0][r - i - 1][0] = '|';
        arr[0][r - i - 1][c - 1] = '|';

        arr[1][i][c - 1] = '|';
        arr[1][r - i - 1][c - 1] = '|';

        arr[2][0][i] = '-';
        arr[2][s + 1][i] = '-';
        arr[2][r - 1][i] = '-';
        arr[2][i][c - 1] = '|';
        arr[2][r - i - 1][0] = '|';

        arr[3][0][i] = '-';
        arr[3][s + 1][i] = '-';
        arr[3][r - 1][i] = '-';
        arr[3][i][c - 1] = '|';
        arr[3][r - i - 1][c - 1] = '|';

        arr[4][s + 1][i] = '-';
        arr[4][i][0] = '|';
        arr[4][i][c - 1] = '|';
        arr[4][r - i - 1][c - 1] = '|';

        arr[5][0][i] = '-';
        arr[5][s + 1][i] = '-';
        arr[5][r - 1][i] = '-';
        arr[5][i][0] = '|';
        arr[5][r - i - 1][c - 1] = '|';

        arr[6][0][i] = '-';
        arr[6][s + 1][i] = '-';
        arr[6][r - 1][i] = '-';
        arr[6][i][0] = '|';
        arr[6][r - i - 1][0] = '|';
        arr[6][r - i - 1][c - 1] = '|';

        arr[7][0][i] = '-';
        arr[7][i][c - 1] = '|';
        arr[7][r - i - 1][c - 1] = '|';

        arr[8][0][i] = '-';
        arr[8][s + 1][i] = '-';
        arr[8][r - 1][i] = '-';
        arr[8][i][0] = '|';
        arr[8][i][c - 1] = '|';
        arr[8][r - i - 1][0] = '|';
        arr[8][r - i - 1][c - 1] = '|';

        arr[9][0][i] = '-';
        arr[9][s + 1][i] = '-';
        arr[9][r - 1][i] = '-';
        arr[9][i][0] = '|';
        arr[9][i][c - 1] = '|';
        arr[9][r - i - 1][c - 1] = '|';
    }

    char res[r][(c + 1) * n.size() - 1];
    for (int i = 0; i < r; i++)
        for (int j = 0; j < (c + 1) * n.size() - 1; j++)
            res[i][j] = ' ';

    int resNum[n.size()];
    for (int i = 0; i < n.size(); i++)
        resNum[i] = n[i] - '0';

    for (int k = 0; k < (c + 1) * n.size() - 1; k += c + 1)
        for (int i = 0; i < r; i++)
            for (int j = 0; j < c; j++)
                res[i][j + k] = arr[resNum[k / (c + 1)]][i][j];

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < (c + 1) * n.size() - 1; j++)
            cout << res[i][j];
        cout << endl;
    }
}