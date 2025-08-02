#include <iostream>
#include <vector>
using namespace std;

vector<int> num = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};

int count(int n)
{
    return num[n / 10] + num[n % 10];
}

string show(int n)
{
    if (n < 10)
    {
        return "0" + to_string(n);
    }
    return to_string(n);
}

int main()
{
    int N;
    cin >> N;

    bool isPossible = false;
    for (int i = 0; i < 100; i++)
    {
        for (int j = 0; j < 100; j++)
        {
            if (i + j < 100 && count(i) + count(j) + count(i + j) + 4 == N)
            {
                isPossible = true;
                cout << show(i) + "+" + show(j) + "=" + show(i + j);

                i = 100;
                break;
            }
        }
    }

    if (!isPossible)
    {
        cout << "impossible";
    }
}