#include <iostream>
#include <vector>
#include <sstream>
using namespace std;

int gcd(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    return gcd(b, a % b);
}

int main()
{
    int N;
    cin >> N;
    cin.ignore();

    while (N--)
    {
        string s;
        getline(cin, s);

        stringstream ss(s);
        vector<int> v;
        int num;

        while (ss >> num)
        {
            v.push_back(num);
        }

        int maxGCD = 1;
        for (int i = 0; i < v.size(); i++)
        {
            for (int j = i + 1; j < v.size(); j++)
            {
                maxGCD = max(maxGCD, gcd(v[i], v[j]));
            }
        }

        cout << maxGCD << endl;
    }
}