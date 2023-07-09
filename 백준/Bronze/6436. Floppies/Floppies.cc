#include <iostream>
#define FILE_SIZE 1860000
using namespace std;

int main()
{
    for (int i = 1;; i++)
    {
        int s;
        cin >> s;

        if (s == 0)
        {
            break;
        }

        if (s % 2)
        {
            s = s / 2 + 1;
        }
        else
        {
            s /= 2;
        }
        s += s / 2;

        cout << "File #" << i << endl;
        cout << "John needs " << (s + FILE_SIZE - 1) / FILE_SIZE << " floppies." << endl
             << endl;
    }
}