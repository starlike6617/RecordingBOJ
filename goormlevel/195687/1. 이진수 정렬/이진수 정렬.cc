#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int count_one(int a) {
	int cnt = 0;
	while (a) {
		a &= a - 1;
		cnt++;
	}
	return cnt;
}

bool cmp(pair<int, int> a, pair<int, int> b) {
	if (a.second == b.second) {
		return a.first > b.first;
	}
	return a.second > b.second;
}

int main() {
	int N, K;
	cin >> N >> K;
	
	vector<pair<int, int>> v(N);
	for (int i = 0; i < N; i++) {
		cin >> v[i].first;
		v[i].second = count_one(v[i].first);
	}
	
	sort(v.begin(), v.end(), cmp);
	
	cout << v[K - 1].first;
}