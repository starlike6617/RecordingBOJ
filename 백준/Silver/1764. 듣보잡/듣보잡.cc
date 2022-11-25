#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
  int n, m;
  cin >> n >> m;

  vector<string> arr(n);
  for (int i = 0; i < n; i++)
    cin >> arr[i];
  sort(arr.begin(), arr.end());

  string str;
  vector<string> v;
  for (int i = 0; i < m; i++)
    {
      cin >> str;
      if (binary_search(arr.begin(), arr.end(), str))
        v.push_back(str);
    }

  sort(v.begin(), v.end());
  cout << v.size() << '\n';
  for (int i = 0; i < v.size(); i++)
    cout << v[i] << '\n';
}