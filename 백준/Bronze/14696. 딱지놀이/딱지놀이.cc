#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int N;
    cin >> N;

    while (N--)
    {
        int a;
        cin >> a;

        vector<int> A(4);
        while (a--)
        {
            int n;
            cin >> n;
            A[n - 1]++;
        }

        int b;
        cin >> b;

        vector<int> B(4);
        while (b--)
        {
            int n;
            cin >> n;
            B[n - 1]++;
        }

        char res = 'D';
        for (int i = 3; i >= 0; i--)
        {
            if (A[i] > B[i])
            {
                res = 'A';
                break;
            }
            else if (A[i] < B[i])
            {
                res = 'B';
                break;
            }
        }

        cout << res << endl;
    }
}