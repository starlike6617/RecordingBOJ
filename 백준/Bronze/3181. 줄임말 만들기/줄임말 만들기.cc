#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

int main()
{
    string str;
    getline(cin, str);

    istringstream iss(str);
    vector<string> v;

    string tmp;
    while (iss >> tmp)
    {
        v.push_back(tmp);
    }

    for (int i = 0; i < v.size(); i++)
    {
        if ((i == 0) || (v[i] != "i" && v[i] != "pa" && v[i] != "te" && v[i] != "ni" && v[i] != "niti" && v[i] != "a" && v[i] != "ali" && v[i] != "nego" && v[i] != "no" && v[i] != "ili"))
        {
            cout << (char)(v[i][0] - 'a' + 'A');
        }
    }
}