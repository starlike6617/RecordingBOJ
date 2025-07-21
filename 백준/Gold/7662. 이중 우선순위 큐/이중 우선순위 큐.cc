#include <iostream>
#include <vector>
#include <queue>
#include <unordered_map>
#define endl '\n'
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;

    while (T--)
    {
        int k;
        cin >> k;

        priority_queue<int> pqMax;
        priority_queue<int, vector<int>, greater<int>> pqMin;
        unordered_map<int, int> cnt;

        while (k--)
        {
            char opr;
            int n;
            cin >> opr >> n;

            if (opr == 'I')
            {
                pqMax.push(n);
                pqMin.push(n);
                cnt[n]++;
            }
            else if (n == 1)
            {
                while (!pqMax.empty() && cnt[pqMax.top()] == 0)
                {
                    pqMax.pop();
                }

                if (!pqMax.empty() && cnt[pqMax.top()] > 0)
                {
                    cnt[pqMax.top()]--;
                    pqMax.pop();
                }
            }
            else
            {
                while (!pqMin.empty() && cnt[pqMin.top()] == 0)
                {
                    pqMin.pop();
                }

                if (!pqMin.empty() && cnt[pqMin.top()] > 0)
                {
                    cnt[pqMin.top()]--;
                    pqMin.pop();
                }
            }
        }

        while (!pqMax.empty() && cnt[pqMax.top()] == 0)
        {
            pqMax.pop();
        }
        while (!pqMin.empty() && cnt[pqMin.top()] == 0)
        {
            pqMin.pop();
        }

        if (pqMax.empty())
        {
            cout << "EMPTY" << endl;
        }
        else
        {
            cout << pqMax.top() << ' ' << pqMin.top() << endl;
        }
    }
}