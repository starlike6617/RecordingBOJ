#include <iostream>
using namespace std;

int main()
{
    for (int i = 1;; i++)
    {
        string str;
        getline(cin, str);

        if (str == "0")
            break;
        cout << "Case " << i << ": Sorting... done!" << endl;
    }
}