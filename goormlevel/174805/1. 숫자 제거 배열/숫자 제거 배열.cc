#include <iostream>
using namespace std;
int main() {
	int N;
	string K;
	cin >> N >> K;
	
	int cnt = 0;
	while (N--) {
		string s;
		cin >> s;
		
		if (s.find(K) == string::npos) {
			cnt++;
		}
	}
	cout << cnt;
}