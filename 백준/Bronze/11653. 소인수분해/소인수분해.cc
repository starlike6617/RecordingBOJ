#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int N;
    cin >> N;

    vector<int> v;
    for (int i = 2; i * i <= N; i++)
    {
        if (N % i == 0)
        {
            while (N % i == 0)
            {
                N /= i;
                v.push_back(i);
            }
        }
    }

    for (int i : v)
    {
        cout << i << endl;
    }

    if (N != 1)
    {
        cout << N;
    }
}