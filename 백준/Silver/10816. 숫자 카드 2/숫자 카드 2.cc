#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;

    unordered_map<int, int> m;
    while (N--)
    {
        int num;
        cin >> num;
        m[num]++;
    }

    int M;
    cin >> M;

    while (M--)
    {
        int num;
        cin >> num;
        cout << m[num] << ' ';
    }
}