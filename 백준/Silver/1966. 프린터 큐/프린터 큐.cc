#include <iostream>
#include <deque>
using namespace std;

bool find(deque<int> q)
{
    for (int i = 1; i < q.size(); i++)
        if (q[0] < q[i])
            return true;
    return false;
}

int main()
{
    int t, n, m;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        cin >> n >> m;

        int cnt = 1;
        deque<int> q1(n); // 문서 이름
        deque<int> q2(n); // 문서 중요도

        for (int j = 0; j < n; j++)
            q1[j] = j + 1;
        for (int j = 0; j < n; j++)
            cin >> q2[j];

        while (1)
        {
            if (find(q2))
            { // 안 중요하면 뒤로
                q1.push_back(q1[0]);
                q1.pop_front();
                q2.push_back(q2[0]);
                q2.pop_front();

                if (m == 0)
                    m = q1.size() - 1;
                else
                    m--;
            }
            else
            { // 중요하면
                if (m != 0)
                { // m != 0이면 pop_front
                    q1.pop_front();
                    q2.pop_front();
                    m--;
                    cnt++;
                }
                else
                { // m == 0이면 출력
                    cout << cnt << '\n';
                    break;
                }
            }
        }

        q1.clear();
        q2.clear();
    }
}