#include <iostream>
#include <set>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;

    while (T--)
    {
        int k;
        cin >> k;

        multiset<int> ms;
        while (k--)
        {
            char opr;
            int n;
            cin >> opr >> n;

            if (opr == 'I')
            {
                ms.insert(n);
            }
            else if (!ms.empty())
            {
                if (n == 1)
                {
                    auto it = ms.end();
                    it--;
                    ms.erase(it);
                }
                else
                {
                    ms.erase(ms.begin());
                }
            }
        }

        if (ms.empty())
        {
            cout << "EMPTY" << '\n';
        }
        else
        {
            auto it = ms.end();
            it--;
            cout << *it << ' ' << *ms.begin() << '\n';
        }
    }
}