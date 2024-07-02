#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b) {
	if (a.second == b.second) {
		return a.first < b.first; 
	}
	return a.second < b.second;
}

int main() {
	int N;
	cin >> N;
	
	vector<pair<int, int>> v(N);
	for (int i = 0; i < N; i++) {
		cin >> v[i].first >> v[i].second;
	}
	
	sort(v.begin(), v.end(), cmp);
	
	int t = 0, cnt = 0;;
	for (int i = 0; i < N; i++) {
		if (v[i].first > t) {
			cnt++;
			t = v[i].second;
		}
	}
	
	cout << cnt;
}