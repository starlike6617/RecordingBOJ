#include <iostream>
#include <vector>
using namespace std;

void stringSplit(string s, vector<long long> &vNum, vector<char> &vExp) {
	int idx = 0;
	for (int i = 0; i < s.size(); i++) {
		if (!isdigit(s[i])) {
			vNum.push_back(stoll(s.substr(idx, i - idx)));
			vExp.push_back(s[i]);
			idx = i + 1;
		}
		if (i == s.size() - 1) {
			vNum.push_back(stoll(s.substr(idx)));
		}
	}
}

long long eval(vector<long long> &n, vector<char> &e) {
	for (int i = 0; i < e.size(); i++) {
		if (e[i] == '*') {
			e.erase(e.begin() + i);
			n[i] = n[i] * n[i + 1];
			n.erase(n.begin() + i + 1);
			i--;
		}
		
		// test
		// cout << "N: ";
		// for (long long i: n) cout << i << ' ';
		// cout << endl;
		
		// cout << "E: ";
		// for (char c : e) cout << c << ' ';
		// cout << endl << endl;
	}
	
	long long res = n[0];
	for (int i = 0; i < e.size(); i++) {
		if (e[i] == '+') {
			res += n[i + 1];
		}
		else {
			res -= n[i + 1];
		}
	}
	return res;
}

int main()
{
	string A, B;
	cin >> A >> B;
	
	vector<long long> aNum, bNum;
	vector<char> aExp, bExp;
	
	stringSplit(A, aNum, aExp);
	stringSplit(B, bNum, bExp);
	
	cout << max(eval(aNum, aExp), eval(bNum, bExp));
}