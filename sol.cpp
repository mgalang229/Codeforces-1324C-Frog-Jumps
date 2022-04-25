#include <bits/stdc++.h>
using namespace std;

void perform_test() {
	string s;
	cin >> s;
	int n = s.size();
	bool all_same = true;
	for(int i = 0; i < n; i++) {
		all_same &= (s[i] == 'L');
	}
	if(all_same) {
		cout << n + 1 << "\n";
		return;
	}
	int mx = INT_MIN;
	int prev = -1;
	for(int i = 0; i < n; i++) {
		if(s[i] == 'R') {
			mx = max(mx, i - prev);
			prev = i;
		}
	}
	mx = max(mx, n - prev);
	cout << mx << "\n";
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int T;
	cin >> T;
	for(int tc = 1; tc <= T; tc++) {
		perform_test();
	}
	return 0;
}
