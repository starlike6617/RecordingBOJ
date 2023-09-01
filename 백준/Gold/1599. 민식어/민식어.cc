#include <iostream>
#include <algorithm>
using namespace std;

string toMinsik(string a)
{
    int size = a.size();
    for (int i = 0; i < size; i++)
    {
        if (i < size - 1 && a[i] == 'n' && a[i + 1] == 'g')
        {
            a[i] = 'o';
            a.erase(a.begin() + i + 1);
            size--;
        }
        else if (a[i] == 'k')
        {
            a[i] = 'c';
        }
        else if (a[i] == 'o')
        {
            a[i] = 'p';
        }
        else if (a[i] == 'p')
        {
            a[i] = 'q';
        }
    }
    return a;
}

string fromMinsik(string a)
{
    int size = a.size();
    for (int i = 0; i < size; i++)
    {
        if (a[i] == 'o')
        {
            a[i] = 'n';
            a.insert(a.begin() + i + 1, 'g');
            size++;
            i++;
        }
        else if (a[i] == 'c')
        {
            a[i] = 'k';
        }
        else if (a[i] == 'p')
        {
            a[i] = 'o';
        }
        else if (a[i] == 'q')
        {
            a[i] = 'p';
        }
    }
    return a;
}

int main()
{
    int N;
    cin >> N;

    string arr[N];
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
        arr[i] = toMinsik(arr[i]);
    }

    sort(arr, arr + N);

    for (string s : arr)
    {
        cout << fromMinsik(s) << endl;
    }
}
