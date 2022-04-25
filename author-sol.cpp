#include <bits/stdc++.h>
using namespace std;

void perform_test() {
	string s;
	cin >> s;
	vector<int> pos;
	pos.push_back(0);
	for(int i = 0; i < (int) s.size(); i++) {
		if(s[i] == 'R') {
			pos.push_back(i + 1);
		}
	}
	pos.push_back((int) s.size() + 1);
	int ans = 0;
	for(int i = 0; i < (int) pos.size() - 1; i++) {
		ans = max(ans, pos[i+1] - pos[i]);
	}
	cout << ans << "\n";
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
