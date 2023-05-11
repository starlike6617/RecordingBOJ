#include <iostream>
#include <stack>
using namespace std;

int main()
{
    int N;
    cin >> N;
    cin.ignore();

    for (int i = 0; i < N; i++)
    {
        stack<string> s;
        string str, temp = "";
        getline(cin, str);

        for (int j = 0; j < str.size(); j++)
        {
            if (str[j] == ' ')
            {
                s.push(temp);
                temp = "";
            }
            else
                temp += str[j];
        }
        s.push(temp);

        cout << "Case #" << i + 1 << ": ";
        while (!s.empty())
        {
            cout << s.top() << ' ';
            s.pop();
        }
        cout << endl;
    }
}