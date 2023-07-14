#include <iostream>
using namespace std;

int main()
{
    for (int i = 100; i < 1000; i++)
    {
        for (int j = 100; j < 1000; j++)
        {
            if (i % 111 == 0 && j % 111 == 0)
            {
                continue;
            }

            if ((i % 10 == j / 100) && ((double)i / j == (double)(i / 10) / (j % 100)))
            {
                cout << i << " / " << j << " = " << i / 10 << " / " << j % 100 << endl;
            }
        }
    }
}